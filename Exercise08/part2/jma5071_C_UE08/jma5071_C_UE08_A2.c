﻿/*
a) 
Was ist ein Zeiger ?
	Ein Zeiger (pointer) ist eine Variable, deren Wert eine Adresse im Speicher ist.
Wie unterscheidet sich eine Zeigervariable von einer 'herkömmlichen' Varable ?
	Der Unterschied liegt darin, dass Int* und Int verschiedene Datentypen sind, das erstere ist ein Pointer erkennbar durch den '*',
	der links davon stehende Datentype int beschreibt den Typ der an der Adresse steht.

b)
01 int i = 5;						Die Integer Variable i wird inizialisiert mit dem Wert 5
02 int j = 6;						Die Integer Variable j wird inizialisiert mit dem Wert 6
03 int t = 0;						Die Integer Variable i wird inizialisiert mit dem Wert 5
04 int* pI = NULL;					Der Pointer pI wird inizialisiert auf die Adresse NULL, der Datentyp auf den gezeigt wird ist Integer zu interpretieren
05 int* pJ = &j;					Der Pointer pJ wird inizialisiert auf die Adresse von Variable j, der Datentyp auf den gezeigt wird ist Integer zu interpretieren
06 float* pF = (float*)&i;			Der Pointer pF wird inizialisiert auf die Adresse von Variable i, der Datentyp auf den gezeigt wird ist Float zu interpretieren
07 pI = &i;							Dem Pointer pI wird die Adresse von Variable i zugewiesen
08 printf(″%i, %i″, *pI, *pJ);		Die dereferenzierten Pointer pI und pJ werden, als Zahlen ihres Systems interpretiert, ausgegeben. Erwartet DEC 5,6
09 t = *pI;							Der Variable t wird der derefernzierte Pointer pI zugewiesen, t wird somit i zugewiesen.
10 *pI = *pJ;						Der dereferenzierte Pointer pI wird dem dereferenzierten Pointer pJ zugewiesen.
11 *pJ = t;							Der Variable t wird der derefernzierte Pointer pJ zugewiesen, t wird somit j zugewiesen.
12 printf(″%i, %i″, *pI, *pJ);		Die dereferenzierten Pointer pI und pJ werden, als Zahlen ihres Systems interpretiert, ausgegeben Erwartet DEC 6,5
13 pJ = pI;							Die Adresse des Pointers pJ wird auf die Adresse des Pointers pI gesetzt, beide Zeiger nun auf i
14 printf(″%i, %i″, *pI, *pJ);		Die dereferenzierten Pointer pI und pJ werden, als Zahlen ihres Systems interpretiert, ausgegeben Erwartet DEC 6, 6
15 *pJ = 10;						Dem dereferenzierten Pointer pJ wird dem Wert 10 zugewiesen, nachdem dieser auf i zeit ist i nun 10.
16 printf(″%i, %i″, *pI, *pJ);		Die dereferenzierten Pointer pI und pJ werden, als Zahlen ihres Systems interpretiert, ausgegeben Erwartet DEC 10, 10

WARNING:
06: Da ein Integerwert(4Byte) auch als Float(4Byte) interpretiert weden kann, kann es zu Fehlern kommen
06: Der Pointer pF ist redundant
08: Womöglich falsche Ausgabe
12: Womöglich falsche Ausgabe
14: Womöglich falsche Ausgabe
16: Womöglich falsche Ausgabe

c)
1)	int i = 1234;
	int k = 5678;
2)	int* pI = &i;
3)	*pI -=1;
4)	(*pI)++;
5)	pI++;
*/