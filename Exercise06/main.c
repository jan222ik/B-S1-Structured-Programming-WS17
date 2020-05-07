/*
autor:			Janik Mayr
title:			main.c
project_name:	jma5071_C_UE06
date:			30.11.2017
version:		1.0
info:			WS17_C_ÜBUNG_06_main
*/

#include <stdio.h>
int ascii2int(char s[]);
void triMatrixFOR(int n);
void triMatrixWHILE(int n);
void triMatrixDOWHILE(int n);
void calcDepoWithIntrest(double deposit, double intrestRate, int investmentTime);
double arithmeticMeanWithBorders(double val[], int length);
int calc(char expr[]);
double expoFunction(int n, double z);

int main(int argc, char* argv[]) {
	/*//Aufgabe 1
	printf("Aufgabe 1\n");
	char x[] = "131AAAA1";
	printf("%d\n", ascii2int(x));
	//Aufgabe 2
	printf("Aufgabe 2\n");
	triMatrixFOR(20);
	triMatrixWHILE(15);
	triMatrixDOWHILE(243);
	//Aufgabe 3
	printf("Aufgabe 3\n");
	double deposit = 1000.5;
	double intrestRate = 0.05;
	calcDepoWithIntrest(1000.50, 0.05, 2);
	//Aufgabe 4
	printf("Aufgabe 4\n");
	double xyz[3] = { 7.2,48.5450,9.0 };
	arithmeticMeanWithBorders(xyz, 3);
	*/
	double x = expoFunction(4, 1);
	printf("%.2f\n", x);

	printf("%d", calc("92 + 8 ="));
	//return Value
	return 0;
}
double expoFunction(int n, double z) {
	int i = 1;
	double sum = 1;
	int factorial = 1;
	double zProduct = 1.0;
	double result = 0;
	while (i<n) {
		factorial = factorial * i;
		zProduct = zProduct * z;
		result += zProduct / factorial;
		i++;
	}
	return result+1;
}


