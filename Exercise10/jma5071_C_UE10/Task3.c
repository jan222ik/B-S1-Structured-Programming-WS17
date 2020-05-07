#include <stdio.h>
#include "Task3.h"
void printPascalTriangle(int depth) {
	int n;
	int k;
	int i;
	long long term;

	for (n = 0; n<depth; n++)
	{
		printf("|L%2d|", n);
		for (i = n; i <= depth; i++) {
			printf("%3c", ' ');
		}
		for (k = 0; k <= n; k++) {
			term = pascalTriangle(n, k);

			printf("%6lld", term);
		}
		printf("\n");	
	}
}

long long pascalTriangle(int n, int k) {
	if ((n == 0) || (k == 0) || (k == n)) {
		return 1;
	}
	return pascalTriangle(n - 1, k - 1) + pascalTriangle(n - 1, k);
}