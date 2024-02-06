#include <stddef.h>

char* new_strcpy(char* destination, const char* source);
char* new_strncpy(char* destination, const char* source, size_t n);
int new_strcmp(const char* string1, const char* string2);
int new_strncmp(const char* string1, const char* string2, size_t n);
char* new_strcat(char* destination, const char* source);
char* new_strncat(char* destination, const char* source, size_t n);
size_t new_strlen(const char* string);
char* new_strchr(const char* string, int character);
char* new_strstr(const char* haystack, const char* needle);
