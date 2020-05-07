/*
autor:			Janik Mayr
title:			A4.c
project_name:	jma5071_C_UE06
date:			30.11.2017
version:		1.0
info:			WS17_C_ÜBUNG_07_AUFGABE_04
*/
/*
Lösungsidee:
Arithmetisches Mittel = Werte aller Element(Indieces)/Anzahl aller Elemente(lenght);
Da IN -> IR abgebildet wird, muss double verwendet werden, dies ist bereits durch den Input gegeben.
Kleinstes Element: Anfangs das erste Element wenns nochhmal ein kleineres gibt dann dies der Variable zuweisen.
Größtes Element: Anfangs das erste Element wenns nochhmal ein größeres gibt dann dies der Variable zuweisen.
*/

double arithmeticMeanWithBorders(double val[], int length) {
	double result = 0;
	double max = val[0];
	double min = val[0];
	for (int i = 0; i < length; i++) {
		result += val[i];
		if (val[i] > max) { max = val[i]; }
		if (val[i] < min) { min = val[i]; }
	}
	result /= length;
	printf("Result:%.2f\tMin_Value:%.2f\tMax_Value:%.2f\n", result, min, max);
	return result;
}