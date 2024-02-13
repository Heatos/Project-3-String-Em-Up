#include <stdio.h>
#include <new_string.h> //is not working? 
#include <string.h>

int main()
{

	char array[100];
	
	char cat[100];
	cat = [dog];
	 
	
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
   
	new_strcpy(array, "cater");
	printf("%c",array);

	new_strncpy(array,"doggie", 3);
	//printf("%c",array);

	new_strcmp("doh","doh");
	//printf("%c",array);

	new_strncmp("dar","cat",2);
	//printf("%c",array);

	new_strcat(array,"");
	//printf("%c",array);

	new_strncat();
	//printf("%c",array);

	new_strlen("dog");
	//printf("%c",array);
   
   //new_strchr();
   //new_strstr();
   
   //library functions

   strcpy();
   
   strncpy();
   
   strcmp();
   
   strncmp();
   
   strcat();
   
   strncat();
   
   strlen("dog");
   
   //strchar();
   
   //strrchr();
    return 0;
}
