program: main.o new_string.o
	gcc main.o new_string.o -o program -Wall

main.o: main.c new_string.h
	gcc -c main.c

new_string.o: new_string.c new_string.h
	gcc -c new_string.c
	
string: new_string.c new_string.h
	gcc -c new_string.c
	
clean: 
	rm -f *.o program
