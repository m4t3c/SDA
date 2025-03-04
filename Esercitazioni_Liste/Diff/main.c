#include "list.h"

extern Item* Diff(const Item* i1, const Item* i2);

int main(void) {
	Item* i1 = ListCreateEmpty();
	int data1[] = { 1, 45, 0, 2, 4, 1, 3 };
	for (size_t i = 0; i < 7; ++i) {
		i1 = ListInsertBack(i1, &data1[i]);
	}

	Item* i2 = ListCreateEmpty();
	int data2[] = { 7, 45, 3, 2, 5 };
	for (size_t i = 0; i < 5; i++)
	{
		i2 = ListInsertBack(i2, &data2[i]);
	}

	Item* res = Diff(i1, i2);
	ListWriteStdout(res);

	return 0;
}