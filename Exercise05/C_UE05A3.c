#include <stdio.h>
int main(int argc, char* argv[]) {
	printf("n\tn^2\n");
	printf("------------\n");
	int squere = 0;
	for (int n = 1; n < 26; ++n) {
		squere = n*n;
			printf("%d\t%d\n", n, squere);
	}
	return 0;
}