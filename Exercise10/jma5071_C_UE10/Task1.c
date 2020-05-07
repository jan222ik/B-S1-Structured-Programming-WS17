#include "Task1.h"
#include <stdlib.h>
#include <stdbool.h>

int* nativeMatchingWithGlob(const char* t, const char* p) {
	int posP = 0;
	int posT = 0;
	int lastPosP = string_length(p) - 1;
	int lastPosT = string_length(t) - 1;
	int offset = 0;
	int posOffset = 1;
	bool match = true;
	int jump = 1;

	int* offsets = malloc((((lastPosT + 1) - (lastPosP + 1))+1) * sizeof(int)); 
	if ((offsets == NULL)||(checkInput(p, true) == false)||(checkInput(t, false)== false)) { return offsets; } // RETURN AT ERROR
	offsets[0] = 1;

	for (posT; posT <= lastPosT; posT += jump) {
		jump = 1;
		posP = 0;
		match = true;
		offset = posT;
		while (posP <= lastPosP){
			if (!((t[posT+posP] == p[posP]) || (p[posP] == '*'))) {
				match = false;
				break;
			}
			if ((p[posP] == '*')&&((posP+1) <= lastPosP)) {
				int i = 0;
				while (posT + posP + i <= lastPosT) {
					if (t[posT + posP + i] == p[posP + 1]) {
						match = true;
						offsets[posOffset] = offset;
						offsets[0] += 1;
						posOffset++;
						match = false;
						break;
					}
					else {
						match = false;
					}
					i++;
				}
			}
			posP+=1;
		}
		if (match == true) {
			offsets[posOffset] = offset;
			offsets[0] += 1;
			posOffset++;
		}
	}
	return offsets;
}
bool checkInput(char* p, bool glob) {
	int i = 0;
	while (i < string_length(p)) {
		if (((p[i] >= 'A') && (p[i] <= 'Z')) || ((p[i] >= 'a') && (p[i] <= 'z')) || (p[i] == ' ') || ((p[i] == '*') && glob)) {
		} else { return false;}
		i++;
	}
	return true;
}

int string_length(const char* str) {
	int i = 0;
	for (i=0; str[i] != 0; i++) {
	}
	return i;
}