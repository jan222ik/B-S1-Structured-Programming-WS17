/*
autor:			Janik Mayr
title:			A2.c
project_name:	jma5071_C_UE06
date:			30.11.2017
version:		1.0
info:			WS17_C_ÜBUNG_07_AUFGABE_02
*/
/*
Lösungsidee:
	Anzahl der Elemente pro Ebene nimmt immer um 1 zu.
	Nächster Zeilenumbruch daher, wenn die Anzahl der Element(hier:steps) größer
	der Nummer der Ebene ist. Beider Variablen beginnen bei 1, der Übersicht halber.
	Additiv für triMatrixDOWHILE: Prüfen das n mindestens 2 ist damit es keinen Fehler gibt.
*/

void triMatrixFOR(int n) {
	int step = 1;
	int level = 1;
	for (int i = 1; i < n; i = i + 2) {
		if (step > level) {
			printf("\n");
			level++;
			printf("%d\t", i);
			step = 2;
		}
		else {
			printf("%d\t", i);
			step++;
		}
	}
	printf("\n");
}

void triMatrixWHILE(int n) {
	int step = 1;
	int level = 1;
	int i = 1;
	while (i < n) {
		if (step > level) {
			printf("\n");
			level++;
			printf("%d\t", i);
			step = 2;
		}
		else {
			printf("%d\t", i);
			step++;
		}
		i = i + 2;
	}
	printf("\n");
}

void triMatrixDOWHILE(int n) {
	int step = 1;
	int level = 1;
	int i = 1;
	if (n > 1) {
		do {
			if (step > level) {
				printf("\n");
				level++;
				printf("%d\t", i);
				step = 2;
			}
			else {
				printf("%d\t", i);
				step++;
			}
			i = i + 2;
		} while (i < n);
	}
	printf("\n");
}