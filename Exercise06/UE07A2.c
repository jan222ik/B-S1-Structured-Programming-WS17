
int calc(char expr[]) {
	int pos = 0;
	int number1 = 0;
	int number2 = 0;
	int operation;
	while (expr[pos] != ' ') {
		number1 = number1 * 10 + expr[pos] - 48;
		pos++;
	}
	pos++;
	printf("Vorschleife%c\n", expr[pos]);
	while (expr[pos] != '=') {
		operation = pos;
		printf("%c", operation);
		pos++;
		while (expr[pos] != ' ') {
			number2 = number2 * 10 + expr[pos] - 48;
			pos++;
		}
		switch (expr[operation]) {
		case '+': number1 = number1 + number2; break;
		case '-': number1 = number1 - number2; break;
		case '*': number1 = number1 * number2; break;
		case '/': number1 = number1 / number2; break;
		default: printf("iamhere,%c\n", expr[operation]); 
		}
		pos++;
	}
	return number1;
}
