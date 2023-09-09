#include <stdio.h>

#define MAX_SIZE 256

int main() {
	int v[MAX_SIZE];
	v[MAX_SIZE + 2] = 10;
	printf("%d\n", v[MAX_SIZE + 2]);

	return 0;
}
