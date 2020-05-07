#include "jma5071_C_UE08_A3.h"
#include <stdio.h>
int tokenizerIndices(char str[], int aPos[]) {
	int pos = 1;
	int anzahl = 0;
	int i = 0;
	int first = 0;
	aPos[0] = 0;
	while (str[pos - 1] != 0) {
		if (first== 0) {
			first = 1;
			//printf("Gespeichert_First: %d an Stelle %d\n", pos, i);
		}
		else {
			aPos[i] = pos;
			//printf("Gespeichert: %d an Stelle %d\n",pos, i);
		}
		while ((str[(pos)] != ' ') && (str[(pos)] != 0)) {
			pos += 1;
		}
		pos += 1;
		anzahl++;
		i++;
	}
	return anzahl;
}

int tokenizerAdr(char str[], int aPos[]) {
	int pos = 1;
	int anzahl = 0;
	int i = 0;
	int first = 0;
	int firstAdr = &str[0];
	aPos[0] = firstAdr;
	while (str[pos - 1] != 0) {
		if (first == 0) {
			first = 1;
			//printf("Gespeichert_First: %d an Stelle %d\n", pos, i);
		}
		else {
			aPos[i] = firstAdr + pos;
			//printf("Gespeichert: %d an Stelle %d\n", pos, i);
		}
		while ((str[(pos)] != ' ') && (str[(pos)] != 0)) {
			pos += 1;
		}
		pos += 1;
		anzahl++;
		i++;
	}
	return anzahl;
}

void printText(char str[]) {
	printf("{\nLETTER \t INDEX \t ADR \n");
	int i = 0;
	while (str[i] != 0) {
		printf("%c \t %d \t %x \n",str[i], i, &str[i] );
		i++;
	}
}