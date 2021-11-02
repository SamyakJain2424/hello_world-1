CC = gcc
CFLAGS = 
LIB = 

all: main

sgs_clib_1d_double_array:
	$(CC) $(CFLAGS) -c array.c


main: sgs_clib_1d_double_array
	$(CC) $(CFLAGS) array.o main.c -o main

run:
	./main