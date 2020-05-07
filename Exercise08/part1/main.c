#include <stdio.h>
#include "jma5071_C_UE08_A1.h"
//#include "jma5071_C_UE08_A3.h"
extern int tokenizerIndices(char str[], int aPos[]);
extern int tokenizerAdr(char str[], int aPos[]);
extern void printText(char str[]);
void testA1(void);
void testA3(void);

int main(int argc, char* argv[]) {
	printf("\n--------------------------------MAIN Aufgabe 01--------------------------------\n");
	testA1();
	printf("\n--------------------------------MAIN Aufgabe 03--------------------------------\n");
	testA3();
	printf("\n-----------------------------------MAIN DONE-----------------------------------\n");
	int scan;
	scanf_s("%d", &scan);
}

void testA1(void) {
	double x = 2.0;
	double calc = calcsqrt(x);
	printf("Wurzel von %f\t Ergebnis:%f\tQuadrat von Ergebnis: %f\n", x, calc, calc*calc);
	x = 4.0;
	calc = calcsqrt(x);
	printf("Wurzel von %f\t Ergebnis:%f\tQuadrat von Ergebnis: %f\n", x, calc, calc*calc);
	x = 123.3;
	calc = calcsqrt(x);
	printf("Wurzel von %f\t Ergebnis:%f\tQuadrat von Ergebnis: %f\n", x, calc, calc*calc);
	x = 3;
	calc = calcsqrt(x);
	printf("Wurzel von %f\t Ergebnis:%f\tQuadrat von Ergebnis: %f\n", x, calc, calc*calc);
}

void testA3(void) {
	char str[] = "Dies ist ein Probe-String";
	int arr[1000];
	int length = tokenizerIndices(str,arr);
	printText(str);
	printf("INDEX:\t");
	for (int i = 0; i < length; i++) {
		printf("%d\t\t", arr[i]);
	}
	printf("\n");
	int arr2[1000];
	length = tokenizerAdr(str, arr2);
	printf("ADR:\t");
	for (int i = 0; i < length; i++) {
		printf("%x\t", arr2[i]);
	}

	char str2[] = "Ich bin ganz zufälligerweise auch ein Probestring und ich fühle mich echt TOLL aaaaaaahahhhhhh gleich ist das Programm zu Ende und dann bin ich weg :o";
	int arr3[1000];
	length = tokenizerIndices(str2, arr3);
	printText(str2);
	printf("INDEX:\t");
	for (int i = 0; i < length; i++) {
		printf("%d\t\t", arr3[i]);
	}
	printf("\n");
	int arr4[1000];
	length = tokenizerAdr(str2, arr4);
	printf("ADR:\t");
	for (int i = 0; i < length; i++) {
		printf("%x\t", arr4[i]);
	}
}