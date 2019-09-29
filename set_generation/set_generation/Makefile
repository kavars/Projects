#compiler
CC = clang++

#flags
CFLAGS = -c -Wall -Wextra -pedantic

all: test

test: main.o lodepng.o
		$(CC) main.o lodepng.o -o test

main.o: main.cpp
		$(CC) $(CFLAGS) main.cpp

lodepng.o: lib/lodepng.cpp
		$(CC) $(CFLAGS) lib/lodepng.cpp -ansi -O3

clear:
		rm -rf *.o nn_1