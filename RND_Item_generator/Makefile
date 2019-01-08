all: rnd_item_generator

rnd_item_generator: rnd_main.o
		g++ rnd_main.o -o rnd_item_generator

rnd_main.o: rnd_main.cpp
		g++ -c rnd_main.cpp

clear:
		rm -rf *.o rnd_item_generator