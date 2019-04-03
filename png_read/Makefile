#compiler
CC = g++

#flags
CFLAGS = -c

all: png_read

png_read: main.o
		$(CC) main.o -o png_read

main.o: main.cpp
		$(CC) $(CFLAGS) main.cpp

clear:
		rm -rf *.o png_read