#compiler
CC = clang++

#flags
CFLAG = -c

character: character.o
		$(CC) character.o -o character

character.o: character.cpp
		$(CC) $(CFLAG) character.cpp

clear:
		rm -rf *.o character