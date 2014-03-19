all: Three_numbers Two_numbers

Three_numbers: Three_numbers.o
	gcc Three_numbers.o -o Three_numbers
	
Three_numbers.o : Three_numbers.c 
	gcc -c Three_numbers.c
	
Two_numbers: Two_numbers.o
	gcc Two_numbers.o -o Two_numbers
	
Two_numbers.o : Two_numbers.c 
	gcc -c Two_numbers.c
