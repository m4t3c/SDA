#include "minheap.h"
#include <stdlib.h>
#include <string.h>

extern void HeapMinMoveDownRec(Heap* h, int i);

int main(void) {
	ElemType arr[] = { 13, 0, 1, 7, 3, 2, 8, 10, 11, 5, 4 };
	size_t size = sizeof(arr) / sizeof(arr[0]);

	Heap* h = HeapCreateEmpty();

	h->data = malloc(size * sizeof(ElemType));
	h->size = size;
	memcpy(h->data, arr, size * sizeof(ElemType));

	HeapWriteStdout(h);
	HeapMinMoveDown(h, 0);
	HeapWriteStdout(h);

	return 0;
}