#compiler to use
CC = clang++

#compiler flags
CPPFlAGS = -g -Wall

#files to link
LFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

all: main

main: game main.cpp 
	$(CC) $(CPPFlAGS) -o pong $(LFLAGS) main.cpp game.o

game: src/game.cpp src/game.hpp
	$(CC) $(CPPFlAGS) -c src/game.cpp

clean:
	rm -rf pong *.o *core *~ *.dSYM