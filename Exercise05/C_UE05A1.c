#include <stdio.h>
int main(int argc, char* argv[]) {
	int number1 = -20;
	int number2 = 10;
	int memory = 0;
	int result = 0;
	if (number1 > number2) {
		memory = number1;
		number1 = number2;
		number2 = memory;
	}
	memory = number2;
		while (number1 != 0) {
			if (number1 % 2 != 0) {
				result = result + memory;
			}
			number1 = number1/2;
			number2 = number2 * 2;
			memory = number2;
		}
	printf("%d\n",result);
	return 0;
}