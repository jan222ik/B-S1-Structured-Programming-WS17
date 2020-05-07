//* Janik Mayr */
#ifndef AUFGABE_DREI_H
#define AUFGABE_DREI_H
struct Trimatrix {
	int elements;
	int* location;
	bool valid;
};
struct SquereMatrix {
	int dimension;
	int* location;
	bool valid;
};
struct SquereMatrix trimatrixRebuildMatrix(struct Trimatrix matrix);
struct Trimatrix triMatrixStore(int n);
struct Trimatrix trimatrixStructCreate(int elements, int* location);
struct Trimatrix trimatrixStructCreateV(int elements, int* location, bool valid);
int printMatrix(const struct SquereMatrix sM);
#endif // !AUFGABE_DREI_H
