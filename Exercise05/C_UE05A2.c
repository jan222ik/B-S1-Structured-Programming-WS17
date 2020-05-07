#include <stdio.h>
int main(int argc, const char* argv[]) {
	int input = 1;
	printBi(input);
	//USER INPUT
	int userIn = 1;
	while (userIn >= 0) {
		printf("\nPlease input an integer value: ,to end enter a value x<0\n");
		scanf("%d", &userIn);
		printBi(userIn);
	}
	//END USER INPUT
	return 0;
}
int printBi(int number) {
	if (number > 0) {
		printBi(number / 2);
		printf("%d", number % 2);
	}
	else { printf("0"); }
	return 0;
}