//* Janik Mayr */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "stringfunc.h"
#include "Aufgabe3.h"
#include "Tests.h"
void testTask3(void) {
	printf("\n TESTS FOR TASK III\n\n");
	testTask3Work(23);
	testTask3Work(1);
	testTask3Work(34);
	testTask3Work(42);
	printf("\n\n END TESTS FOR TASK III\n");
}

void testTask3Work(int n) {
	printf("\nTrimatrix for n= %d", n);
	int arr[10] = { 1,2,3,4,5,6,7,8,9,12 };
	//struct Trimatrix matrix = trimatrixStructCreate(10, arr);
	struct Trimatrix matrix = triMatrixStore(n);
	if (matrix.valid != true) {
		printf("\nTRIMATRIX_IS_NOT_VALID");
	}
	else {
		printf("\nTRIMATRIX_IS_VALID");
		printf("\nELEMENTS_TRIMATRIX: %d", matrix.elements);
		printf("\nLOCATION_TRIMATRIX: %p\n", matrix.location);
	}
	struct SquereMatrix m2;
	m2 = trimatrixRebuildMatrix(matrix);
	if (m2.valid != true) {
		printf("\nSquMATRIX_IS_NOT_VALID");
	}
	else {
		printf("\nSquMATRIX_IS_VALID");
		printf("\nDIMENSION_SquMATRIX: %d", m2.dimension);
		printf("\nLOCATION_SquMATRIX: %p\n", m2.location);
		printf("\nPrinted_Elements= %d\n", printMatrix(m2));
	}
	free(matrix.location);
	free(m2.location);
}

void testTask2(void) {
	printf("\n TESTS FOR TASK II\n\n");
	testTask2Work("totally_generic_bunny.png");
	printf("\n");
	testTask2Work("grumpy_cat.png");
	printf("\n");
	testTask2Work("You were defeated the moment you surrendered to this madness");
	printf("\n");
	testTask2Work("Black magic bars our way, but the will of a Templar is stronger!");
	printf("\n");
	testTask2Work("Your mother shouldn't have spawned you!");
	printf("\n\n END TESTS FOR TASK II\n");
}

void testTask2Work(char s[]) {
	char* p = strDuplicate(s);
	int i = 0;
	printf("\t");
	while (p[i] != 0) {
		printf("%c", p[i]);
		i++;
	}
	free(p);
}

void testTask1(void) {
	printf("\n TESTS FOR TASK I\n\n");
	char s1[] = "Feuerwehr";
	char s1m[] = "Rhewreuef";
	char s2[] = "Feuerwehrauto";
	char s2m[] = "Otuarhewreuef";
	char s2m1[] = "123456789";
	char s2m2[] = "1234";
	char s2m3[] = "12345678";
	char s3[] = "1. Adam";
	char s3m[] = "Mada .1";
	printf("\n TESTS FOR STRING_LEN: \n");
	printf("\tString_Len for String %s: %d\n", s1, string_len(s1));
	printf("\tString_Len for String %s: %d\n", s2, string_len(s2));
	printf("\tString_Len for String %s: %d\n", s3, string_len(s3));
	printf("\n TESTS FOR STRING_CMP: \n");
	printf("\tString_CMP for String %s and %s: %d\n", s1, s2, string_cmp(s1, s2));
	printf("\tString_CMP for String %s and %s: %d\n", s2, s1, string_cmp(s2, s1));
	printf("\tString_CMP for String %s and %s: %d\n", s1, s1, string_cmp(s1, s1));
	printf("\n TESTS FOR STRING_COPY: \n");
	string_copy(s1m, s1);
	printf("\tString_COPY for String %s nach %s\n", s1, s1m);
	string_copy(s2m, s2);
	printf("\tString_COPY for String %s nach %s\n", s2, s2m);
	string_copy(s3m, s3);
	printf("\tString_COPY for String %s nach %s\n", s3, s3m);
	printf("\n TESTS FOR STRING_TOUPPERCASE: \n");
	string_toUpperCase(s1m);
	printf("\tString_ToUpperCase for String %s: %s\n", s1, s1m);
	string_toUpperCase(s2m);
	printf("\tString_ToUpperCase for String %s: %s\n", s2, s2m);
	string_toUpperCase(s3m);
	printf("\tString_ToUpperCase for String %s: %s\n", s3, s3m);
	printf("\n TESTS FOR STRING_SUBSTRING: \n");
	string_subStr(s2m1, s2, 0, 8);
	printf("\tString_SUBSTRING for String %s between %d and %d : %s\n", s2,0,8, s2m1);
	string_subStr(s2m2, s2, 5, 8);
	printf("\tString_SUBSTRING for String %s between %d and %d : %s\n", s2, 5, 8, s2m2);
	string_subStr(s2m3, s2, 0, 4);
	printf("\tString_SUBSTRING for String %s between %d and %d : %s\n", s2, 0, 4, s2m3);
	printf("\n\n END TESTS FOR TASK I\n");
}