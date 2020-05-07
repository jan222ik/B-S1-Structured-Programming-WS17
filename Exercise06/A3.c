/*
autor:			Janik Mayr
title:			A3.c
project_name:	jma5071_C_UE06
date:			30.11.2017
version:		1.0
info:			WS17_C_ÜBUNG_07_AUFGABE_03
*/
/*
Lösungsidee:
	Halt einfach: 
	zinsen = alterKontostand*prozentsatz
	neuerKontostand = zinsen + alterKontostand
	und das in ner Schleife bis der Investitionszeitraum(Darstllungszeitrahmen) abgelaufen ist.
*/


void calcDepoWithIntrest(double deposit, double intrestRate, int investmentTime) {
	printf("Jahr\tKapital\n--------------------------------------\n");		
	for (int year = 1; year <= investmentTime; year++) {
		deposit = deposit*intrestRate + deposit;
		printf("%d\t%.5f\n", year, deposit);
	}
}