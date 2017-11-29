# @author: David Kelly
# @date:   15/11/2017 

CC = g++
LIBS = -lsfml-graphics -lsfml-window -lsfml-system
LDFLAGS =
FLAGS = -std=c++11 -pthread
CPPFILES = main.cpp Creature.cpp
HFILES = Creature.h
OBJECTS=$(CPPFILES:.cpp=.o)
EXECUTABLE=main
RM = rm

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ $(LIBS) $(DEBUGFLAGS)

.cpp.o:
	$(CC) $(FLAGS) $< -o $@ $(LIBS)

DEBUG: DEBUGFLAGS = -g -O0
DEBUG: ALL

clean:
	rm *.o *~ $(EXECUTABLE)