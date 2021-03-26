#compiler to use
CC = clang++

#compiler flags
CPPFlAGS = -g -Wall

#files to link
LFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

OBJFILES = paddle.o game.o main.o

all: main

main: $(OBJFILES)
	$(CC) $(CPPFlAGS) $(OBJFILES) -o pong $(LFLAGS)

paddle.o: src/paddle.cpp
	$(CC) $(CPPFlAGS) -c src/paddle.cpp

game.o: src/game.cpp
	$(CC) $(CPPFlAGS) -c src/game.cpp

main.o: main.cpp
	$(CC) $(CPPFlAGS) -c main.cpp

clean:
	rm -rf pong *.o *core *~ *.dSYM