#include "elemtype.h"
#define _CRT_SECURE_NO_WARNINGS

#define _unused(x) ((void)(x))

int ElemCompare(const ElemType* e1, const ElemType* e2) {
    return strcmp(e1->name, e2->name);
}

ElemType ElemCopy(const ElemType* e) {
    return *e;
}

void ElemSwap(ElemType* e1, ElemType* e2) {
    ElemType tmp = *e1;
    *e1 = *e2;
    *e2 = tmp;
}

void ElemDelete(ElemType* e) {
    _unused(e);
}

void ElemWrite(const ElemType* e, FILE* f) {
    fprintf(f, "%s\n%s\n%d\n%s\n%s\n%s", e->name, e->street, e->number, e->city, e->province, e->postal_code);
}

void ElemWriteStdout(const ElemType* e) {
    ElemWrite(e, stdout);
}