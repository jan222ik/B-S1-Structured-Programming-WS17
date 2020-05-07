#ifndef TASK1_H_
#define TASK1_H_
#include <stdbool.h>
int string_length(const char* str);
bool checkInput(char* p, bool glob);
int* nativeMatchingWithGlob(const char* t, const char* p);
#endif // !TASK1_H_