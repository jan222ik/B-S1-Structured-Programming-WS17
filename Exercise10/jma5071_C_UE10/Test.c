#include "Test.h"
#include "Task1.h"
#include "Task1DisplayHelper.h"
#include "Task2.h"
#include "Task3.h"
#include <stdio.h>
long long s(long long n);

void testTaskI() {
	printf("\nTEST TASK 1\n\n");
	char* s1 = "Ich bin ein Wundervoller Text schalalalalalala";
	char* p1a = "la";
	char* p1b = "l*";
	char* p1c = "l*l";
	char* p1d = "*n";
	char* p1e = "Text";
	char* p1f = "text";
	char* p1g = "*";
	testTaskISub(s1, p1a);
	testTaskISub(s1, p1b);
	testTaskISub(s1, p1c);
	testTaskISub(s1, p1d);
	testTaskISub(s1, p1e);
	testTaskISub(s1, p1f);
	testTaskISub(s1, p1g);
	char* s2 = "What do you call a obese psychic A four chin teller";
	char* p2 = "DA Joke";
	testTaskISub(s2, p2);
	printf("\nEND TEST TASK 1\n");

}

void testTaskISub(char* s, char* p) {
	printTextWithIndecies(s);
	printf("Search for: %s\n", p);
	int* pInt = nativeMatchingWithGlob(s, p);
	printf("Found: %d\n", pInt[0] - 1);
	for (int i = 1; i < pInt[0]; i++) {
		printf("%d, ", pInt[i]);
	}
	printf("\n");
}

void testTaskII() {
	printf("%lld\n",s(99999999999));
	printf("\nTEST TASK 2\n\n");
	printf("n = 1: %d\n", sum(1));
	printf("n = 2: %d\n", sum(2));
	printf("n = 3: %d\n", sum(3));
	printf("n = 4: %d\n", sum(4));
	printf("n = 5: %d\n", sum(5));
	printf("\nEND TEST TASK 2\n");
}

long long s(long long n) {
	if (n < 10) { return n;}
	long long sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return s(sum);
}

void testTaskIII() {
	printf("\nTEST TASK 3\n\n");
	printPascalTriangle(10);
	printf("\n");
	printPascalTriangle(20);
	printf("\n");
	//printPascalTriangle(30);
	printf("\nEND TEST TASK 3\n");
}