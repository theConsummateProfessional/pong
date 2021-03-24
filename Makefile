#compiler to use
CC = clang++

#compiler flags
CPPFlAGS = -g -Wall

#files to link
LFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

TARGET = main

all: $(TARGET)

$(TARGET) : $(TARGET).cpp
	$(CC) $(CPPFLAGS) -o pong $(TARGET).cpp $(LFLAGS)

clean:
	rm -rf *.o main
	rm pong
