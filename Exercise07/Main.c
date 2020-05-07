/*
autor:			Janik Mayr
title:			main.c
project_name:	jma5071_C_UE07
date:			12.12.2017
version:		1.0
info:			WS17_C_ÜBUNG_07_main Aufgabe 1 und 2

Lösungsidee:
1) Mit Summenzeichen schreiben, x! = ...(x-1)*x -> schleife, gleiche für Produkt
2) s. letzte Übung
3) ganz einfach gemacht vgl Gedanken wie bei Blocksatz
*/

#include <stdio.h>
int calc(char expr[]);
double expoFunction(int n, double z);
void displayPOS(char str[]);
int nextNumber(char str[], int* pos);
int main(int argc, char* argv[]) {
	double x = expoFunction(6, 4);
	printf("%.2f\n", x);
	 x = expoFunction(1, 4);
	printf("%.2f\n", x);
	x = expoFunction(6, 1);
	printf("%.2f\n", x);
	x = expoFunction(2, 4);
	printf("%.2f\n", x);
	x = expoFunction(3, 0);
	printf("%.2f\n", x);
	printf("%d\n", calc("123 + 123 ="));
	printf("%d\n", calc("1123 + 123 ="));
	printf("%d\n", calc("123 + 1 ="));
	printf("%d\n", calc("123123123 + 123 ="));
	int scan;
	scanf_s("%d", &scan);
	return 0;

}
double expoFunction(int n, double z) {
	int i = 1;
	int factorial = 1;
	double zProduct = 1.0;
	double result = 0;
	while (i<n) {
		factorial = factorial * i;
		zProduct = zProduct * z;
		result += zProduct / factorial;
		i++;
	}
	return result + 1;
}


int nextNumber(char str[], int* position) {
	int number = 0;
	while (str[(*position)] != ' ') {
		number = number * 10 + str[(*position)] - 48;
		*position = *position +1;
	}
	return number;
}
int calc(char expr[]) {
	int pos = 0;
	int displayC = 1;
																	if (displayC==0){displayPOS(expr);printf("CHAR_%c_AT_POS:%d\n", expr[pos], pos);}
	int number1 = nextNumber(expr, &pos);
																	if (displayC == 0) { printf("NUMBER1:%d\n", number1); }
	int number2 = 0;
	int operation;
																	if (displayC == 0) { printf("CHAR_%c_AT_POS:%d\n", expr[pos], pos); }
	pos++;
																	if (displayC == 0) { printf("CHAR_%c_AT_POS:%d\n", expr[pos], pos); }
	while (expr[pos] != '=') {
		operation = pos;
																	if (displayC == 0) { printf("CHAR_%c_AT_POS:%d_IS_OPERATOR\n", expr[pos], pos); }
		pos = pos + 1;
																	if (displayC == 0) {printf("CHAR_%c_AT_POS:%d\n", expr[pos], pos);}
		pos = pos + 1;
																	if (displayC == 0) {printf("CHAR_%c_AT_POS:%d\n", expr[pos], pos);}
		number2 = nextNumber(expr, &pos);
																	if (displayC == 0) {printf("NUMBER2:%d\n", number2);printf("CHAR_%c_AT_POS:%d\n", expr[pos], pos);}
		switch (expr[operation]) {
			case 43: number1 = number1 + number2; break;
			case 45: number1 = number1 - number2; break;
			case 42: number1 = number1 * number2; break;
			case 47: number1 = number1 / number2; break;
			default: printf("FAIL,%c\n", expr[operation]);
		}
		pos++;
	}
	return number1;
}

void displayPOS(char str[]) {
	for (int i = 0; str[i] != '='; i++) {
		printf("CHAR_%c_AT_POS:%d\n", str[i], i);
	}
	printf("END\n");
}