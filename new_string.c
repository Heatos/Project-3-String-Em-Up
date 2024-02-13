#include "new_string.h"

//copies the characters from the source into the destination
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

//copies the first n characters from the source into the destination
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

//compares two strings. if string1 comes after string2 it returns a positive value, negative if vice versa. 0 if they are equal. 
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

//compares two strings up to the specified index represented by the n value
int new_strncmp(const char* string1, const char* string2, size_t n)
{
    int index = 0;  
    //string1 at index is null end, if string2 at index is null will not be equal to string1 at index
    //and if at any point string1 at index is not equal to string2 at index
    while(string1[index] != '\0' && string1[index] == string2[index] && index < n)
    {
        index++;
    }
    return string1[index] - string2[index];
}

//adds the string contained in source to the end of the string of destination.
char* new_strcat(char* destination, const char* source)
{
    int desIndex = new_strlen(destination);
    //find end of first string
    int sourceIndex = 0;
    while(source[sourceIndex] != '\0')
    {
		destination[desIndex] = source[sourceIndex];
		desIndex++;     
		sourceIndex++;
    }
    destination[desIndex] = '\0';
    return destination;
}

//adds the string contained in source to the end of the string of destination, adds a max of n characters.
char* new_strncat(char* destination, const char* source, size_t n)
{
    int desIndex = new_strlen(destination);

    int sourceIndex = 0;
    while(source[sourceIndex] != '\0' && sourceIndex < n)
    {
        destination[desIndex] = source[sourceIndex];
        desIndex++; 
        sourceIndex++;
    }
    destination[desIndex] = '\0';
    return destination;
}

//returns the number of characters before the null character
size_t new_strlen(const char* string)
{
    int index = 0;
    while(string[index] != '\0')
    {
        index++;
    }
    return index;
}

//returns a pointer to the first occurence of character in string or a null pointer if the character cant be found
char* new_strchr(const char* string, int character)
{

}

//returns a pointer to the first occurrence of the string contained in needle in haystack or a null pointer if it cannot be found
char* new_strstr(const char* haystack, const char* needle)
{

}





