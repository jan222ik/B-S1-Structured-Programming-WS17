//* Janik Mayr */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "Aufgabe3.h"
#define  DIMENSION 6

struct Trimatrix trimatrixStructCreate(int elements, int* location) {
	return trimatrixStructCreateV(elements, location, true);
}
struct Trimatrix trimatrixStructCreateV(int elements, int* location, bool valid) {
	struct Trimatrix m;
	m.elements = elements;
	m.location = location;
	m.valid = valid;
	return m;
}

struct SquereMatrix trimatrixRebuildMatrix(const struct Trimatrix matrix) {
	int mat[DIMENSION][DIMENSION];
	for (int i = 0; i < DIMENSION; i++) {
		for (int j = 0; j < DIMENSION; j++) {
			mat[i][j] = -1;
		}
	}
	int level = 0;
	int step = 0;
	int posInArr = 0;
	while (posInArr < matrix.elements) {
	if (step > level) {
		step = 0;
		level++;
		mat[level][step] = matrix.location[posInArr];
		step++;
	} else {
		mat[level][step] = matrix.location[posInArr];
		step++;
	}
	posInArr++;	
	}
	int* values = malloc(sizeof(int)*DIMENSION*DIMENSION);
	struct SquereMatrix sM;
	if (values == NULL) {
		sM.valid = false;
		return sM;
	}
	int n = 0;
	for (int i = 0; i < DIMENSION; i++) {
		for (int j = 0; j < DIMENSION; j++) {
			values[n] = mat[i][j];
			n++;
		}
	}
	sM.dimension = DIMENSION;
	sM.location = values;
	sM.valid = true;
	return sM;
}

struct Trimatrix triMatrixStore(int n) {
	struct Trimatrix m;
	int* pInt = malloc(n * sizeof(int));
	int i = 0;
	if (pInt == NULL) {
		m.valid = false;
		return m;
	}
	int pos = 0;
	for (i = 1; i < n; i += 2) {
		pInt[pos] = i;
		pos++;
	}
	int* pIntRE = realloc(pInt, i * sizeof(int));
	if (pIntRE == NULL) {
		m.valid = false;
		return m;
	}
	pInt = pIntRE;
	m.elements = pos;
	m.location = pInt;
	m.valid = true;
	return m;
}

int printMatrix(const struct SquereMatrix sM) {
	int d = sM.dimension;
	int pos = 0;
	for (int i = 0; i < d; i++) {
		printf("\n");
		for (int j = 0; j < d; j++) {
			printf("%d\t", sM.location[pos]);
			pos++;
		}
	}
	return pos;
}



