/*
autor:			Janik Mayr
title:			A1.c
project_name:	jma5071_C_UE06
date:			30.11.2017
version:		1.0
info:			WS17_C_ÜBUNG_07_AUFGABE_01 
*/
/* Lösungsidee: 
1) Ziffern in Ascii haben die Zahl 48 für '0' und 57 für '9';
2) char s[].length ist while(s[i]!=0), da das letzte Element '\0' ist(dec. = 0);
3) s[i]-48 = Ziffer wenn i [48,57] -> [0,9];
4) Prüfen, dass nach der Umwandlung der Wert zwischen 0 und 9 liegt;
5) Das Ergebnis wird über mehre durchgänge bestimmt, solange es noch gültige Zeichen gibt;
6) Umwandlung der Ziffernfolge in Zahl im Dezimalsystem: n'= n*10 + Ziffer;
7) Fertig;
Mögliche Verbesserung: @var valid kann durch ein zweites return ersetzt werden um schneller abzubrechen
					(vgl: Zeile 32: return result;);
*/

int ascii2int(char s[]) {
	int result = 0;
	int i = 0;
	while ((s[i] - 48 < 10) && (s[i] - 48 >= 0)) {
		result = result * 10 + s[i] - 48;
		i++;
	}
	return result;
}