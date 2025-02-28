#include "tree.h"

Node* BstInsert(const ElemType* e, Node* n) {
	if (TreeIsEmpty(n)) {
		return TreeCreateRoot(e, NULL, NULL);
	}
	Node* tmp = n;

	while (1) {
		if (ElemCompare(TreeGetRootValue(tmp), e) >= 0) {
			if (TreeIsEmpty(TreeLeft(tmp))) {
				tmp->left = TreeCreateRoot(e, NULL, NULL);
				break;
			}
			tmp = TreeLeft(tmp);
		}
		else {
			if (TreeIsEmpty(TreeRight(tmp))) {
				tmp->right = TreeCreateRoot(e, NULL, NULL);
				break;
			}
			tmp = TreeRight(tmp);
		}
	}

	return n;
}

Node* BstInsertRec(const ElemType* e, Node* n) {
	if (TreeIsEmpty(n)) {
		return TreeCreateRoot(e, NULL, NULL);
	}

	if (ElemCompare(TreeGetRootValue(n), e) >= 0) {
		n->left = BstInsertRec(e, TreeLeft(n));
	}
	else
	{
		n->right = BstInsertRec(e, TreeRight(n));
	}

	return n;
}