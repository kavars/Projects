#compiler
CC = clang++

#flags
CFLAGS = -c

all: nn_1

nn_1: nn_1.o processingFunctions.o lodepng.o
		$(CC) nn_1.o processingFunctions.o lodepng.o -o nn_1

nn_1.o: nn_1.cpp
		$(CC) $(CFLAGS) nn_1.cpp

processingFunctions.o: processingFunctions.cpp
		$(CC) $(CFLAGS) processingFunctions.cpp

lodepng.o: lib/lodepng.cpp
		$(CC) $(CFLAGS) lib/lodepng.cpp -Wall -Wextra -pedantic -ansi -O3

clear:
		rm -rf *.o nn_1