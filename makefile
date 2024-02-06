new_string: new_string.c
	gcc new_string.c -o new_string -Wall
	
clean: 
	rm -f *.o new_string
