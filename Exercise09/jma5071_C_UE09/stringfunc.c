//* Janik Mayr */
#include <stdbool.h>
#include <stdlib.h>
#include "stringfunc.h"
int string_len(const char* str) {
	int i = 0;
	int l = 0;
	while (str[i] != 0){
		l++;
		i++;
	}
	return l;
}
int string_cmp(const char* str1, const char* str2) {
	int i = 0;
	short retV = 12;
	bool breakEarly = false;
	while ((str1[i] != 0) && (str2[i] != 0) && (breakEarly != true)) {
		if (str1[i] < str2[i]) {
			breakEarly = true;
			retV = -1;
		}
		else {
			if (str1[i] > str2[i]) {
				breakEarly = true;
				retV = 1;
			}
			else {
				retV = 3;

			}
		}
		i++;
	}
	if ((str1[i] == 0) && (str2[i] == 0)) {
		retV = 0;
	}
	else {
		if (str1[i] == 0) {
			retV = -1;
		}
		else {
			retV = 1;
		}
	}
	return retV;
}
void string_toUpperCase(char* str) {
	int i = 0;
	while (str[i] != 0) {
		if ((str[i] > 96) && (str[i] < 123)) {
			str[i] -= 32;
		}
		i++;
	}
}
void string_copy(char* destStr, const char* srcStr) {
	int i = 0;
	while (srcStr[i] != 0) {
		destStr[i] = srcStr[i];
		i++;
	}
	destStr[i] = 0;
}
int string_subStr(char* destStr, const char* srcStr, int startOffs, int endOffs) {
	int i = startOffs;
	int pos = 0;
	while (i <= endOffs) {
		if (srcStr[i] != 0) {
			destStr[pos] = srcStr[i];
			pos++;
		}
		else {
			pos = -1;
		}
		i++;
	}
	destStr[i] = 0;
	return pos;
}
char* strDuplicate(const char * pSrc) {
	char* pdest = malloc(sizeof(char)*(string_len(pSrc)+1));
	if (pdest != NULL) {
		string_copy(pdest, pSrc);
	}
	return pdest;
}