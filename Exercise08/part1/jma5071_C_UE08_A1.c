#include "jma5071_C_UE08_A1.h"
double MYEPS = 0.001;
double calcsqrt(double x) {
	double y = x / 2;
	double dif = betrag(y-x);
	while (dif >= MYEPS) {
		double oldy = y;
		y = nextY(y, x);
		//printf("LOOOP%f",y);
		dif = y - oldy;
		dif = betrag(dif);
	}
	return y;
}

double nextY(double y, double x) {
	double newY = (0.5*(y + (x / y)));
	return newY;
}

double betrag(double number) {
	if (number < 0) {
		number *= (-1);
	}
	return number;
}