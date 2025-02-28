#include <stdlib.h>
#include <stdio.h>

static int SchroderRec(int n) {
	if (n == 0) {
		return 1;
	}

	if (n == 1) {
		return 2;
	}

	return ((((6 * n - 3) * SchroderRec(n - 1)) / (n + 1)) - (((n - 2) * SchroderRec(n - 2)) / (n + 1)));
}

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}

	char* endptr;
	int n = strtol(argv[1], &endptr, 10);
	if (n < 0 || *endptr != 0) {
		return 1;
	}
	
	int res = SchroderRec(n);

	printf("%d", res);

	return 0;
}