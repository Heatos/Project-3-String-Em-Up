#include "new_string.h"

char* new_strcpy(char* destination, const char* source)
{
    int index = 0;
    while(source[index] != '\0')
    {
        destination[index] = source[index];
        index++; 
    }
    return destination;
}

char* new_strncpy(char* destination, const char* source, size_t n)
{
    int index = 0;
    //copy up till n or until null
    while(source[index] != '\0' || index < n)
    {
        destination[index] = source[index];
        index++; 
    }
    //fill rest with null
    while(index < n)
    {
        destination[index] = '\0';
        index++;
    }
    return destination;
}

int new_strcmp(const char* string1, const char* string2)
{
    int index = 0;  
    //string1 at index is null end, if string2 at index is null will not be equal to string1 at index
    //or if at any point string1 at index is not equal to string2 at index
    while(string1[index] != '\0' && string1[index] == string2[index])
    {
        index++;
    }
    return string1[index] - string2[index];
}

int new_strncmp(const char* string1, const char* string2, size_t n)
{
    int index = 0;  
    //string1 at index is null end, if string2 at index is null will not be equal to string1 at index
    //or if at any point string1 at index is not equal to string2 at index
    while((string1[index] != '\0' && string1[index] == string2[index]) || index < n)
    {
        index++;
    }
    return string1[index] - string2[index];
}

char* new_strcat(char* destination, const char* source)
{
    int desIndex = 0;
    //find end of first string
    while(destination[desIndex] != '\0')
    {
        desIndex++;
    } 
    int sourceIndex = 0;
    while(source[sourceIndex] != '\0')
    {
        destination[desIndex] = source[sourceIndex];
        desIndex++; 
        sourceIndex;
    }
    return destination;
}

char* new_strncat(char* destination, const char* source, size_t n)
{
    int desIndex = 0;
    //find end of first string
    while(destination[desIndex] != '\0')
    {
        desIndex++;
    } 

    int sourceIndex = 0;
    while(source[sourceIndex] != '\0' || sourceIndex < n)
    {
        destination[desIndex] = source[sourceIndex];
        desIndex++; 
        sourceIndex;
    }
    return destination;
}

size_t new_strlen(const char* string)
{
    int index = 0;
    while(string[index] != '\0')
    {
        index++;
    }
    return index;
}
