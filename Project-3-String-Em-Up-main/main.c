#include <stdio.h>
#include "new_string.h"
#include <string.h>

int main()
{

    char array[100];	 
	
	//our functions
    //new_strcpy(char* destination, const char* source)
	//new_strncpy(char* destination, const char* source, size_t n)
    //new_strcmp(const char* string1, const char* string2)
    //new_strncmp(const char* string1, const char* string2, size_t n)
    //new_strcat(char* destination, const char* source)
    //new_strncat(char* destination, const char* source, size_t n)
    //new_strlen(const char* string)
    //new_strchr(const char* string, int character)
    //new_strstr(const char* haystack, const char* needle)
   
   /*
	new_strcpy(array, "cater"); 
	printf("Output: \"%s\"\n",array); 
	
	char new_string[100];
    strcpy(new_string, array); //destination then source
    printf("OUTPUT: \"%s\"\n", new_string);
    */

	/*
	new_strncpy(array,"doggie", 3); 
	printf("Output: \"%s\"\n",array);
	*/

	/*
	int dohInt = new_strcmp("panda"," ");
    int dohInt2 = strcmp("panda", " ");
	printf("Output: \"%d\"\n",dohInt);
    printf("Output: \"%d\"\n",dohInt2);
    */ 

	/*
	int int1 = new_strncmp("ppick","picklll", 4); 
    int int2 = strncmp("ppick","picklll", 4);
	printf("Output: \"%d\"\n",int1);
    printf("Output: \"%d\"\n",int2);
    */

	/*
    char newString[100]; 
    array[0] = '#';
    array[1] = 'a';
    newString[0] = '#';
    newString[1] = 'b';
    
    char testArray[100];
    char newTest[100];
    testArray[0] = '#';
    testArray[1] = 'a';
    newTest[0] = '#';
    newTest[1] = 'b';
    
	new_strcat(newString, array);
	printf("SampleOURS: %s\n",array);
    printf("OutputOURS: %s\n", newString);
    
    strcat(newTest, testArray);
    printf("SampleLIB: %s\n",testArray);
    printf("OutputLIB: %s\n", newTest);
    */

/*
	char newString[100]; 
    array[0] = '#';
    array[1] = 'a';
    newString[0] = '#';
    newString[1] = 'b';
    
    char testArray[100];
    char newTest[100];
    testArray[0] = '#';
    testArray[1] = 'a';
    newTest[0] = '#';
    newTest[1] = 'b';
	
	new_strncat(newString, array, 2);
	strncat(newString, array, 2);
	printf("Sample: %s\n",array);
    printf("Output: %s\n", newString);

	printf("Number: %lu\n", new_strlen("dog"));
	*/
	
   
    char newString[100];
    newString[99] = 'g'; 
    char* newPointer = new_strchr(newString, 'g');
    printf("New Pointer: %s\n", newPointer);
    
    char* testPointer = strchr(newString,'g');
    printf("NewTest Pointer: %s\n", testPointer);

    newPointer = new_strstr("GeeksforGeeks", "for");
    printf("New Pointer: %s\n", newPointer);
    
    
    
    //library functions

    char new_string[100];
    strcpy(new_string, array);
   
    strncpy(new_string, array, 2);
   
    strcmp(new_string, array);
   
    strncmp(new_string, array, 1);
   
    strcat(new_string, array);
   
    strncat(new_string, array, 2);
   
    strlen("dog");
   
    //strchar();
   
    //strrchr();
    return 0;
}
