#include <stdio.h>
#include "Task1DisplayHelper.h"
#include "Task1.h"
//* Methoden zum Anzeigen des Textes */ 
void printTextWithIndecies(const char* text) {
	int l = string_length(text) - 1;
	printTextWithIndeciesR(text, 0, &l);
	printf("\nPrinted String with Positions (length:%d)\n", l+1);
}

int printTextWithIndeciesR(const char* text, int index, const int* lText) {
	if (text[index] != 0) {
		printf("%2c  ", text[index]);
		printTextWithIndeciesR(text, (index + 1), lText);
		printf("%2d  ", ((*lText) - index));
	}
	else {
		printf("\n");
	}
	return 0;
}