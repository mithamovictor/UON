#include <stdio.h>

void main() {
	int v = 20;
	int *pv = &v;
	printf("\n v is stored at point %x", pv);
}
