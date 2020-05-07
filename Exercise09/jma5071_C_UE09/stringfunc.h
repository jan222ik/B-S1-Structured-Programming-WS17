//* Janik Mayr */
#ifndef STRINGFUNC_H
#define STRINGFUNC_H
int string_len(const char* str);
int string_cmp(const char* str1, const char* str2);
void string_toUpperCase(char* str);
void string_copy(char* destStr, const char* srcStr);
int string_subStr(char* destStr, const char* srcStr, int startOffs, int endOffs);
char* strDuplicate(const char * pSrc);
#endif // !STRINGFUNC_H

