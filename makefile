CC = g++
CFLAGS = -g -Wall
LFLAGS = -lraylib
SRC = main.cpp
EXEC = pong

.PHONY: all clean

all: $(EXEC)
	./$(EXEC)

$(EXEC): $(SRC)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRC) $(LFLAGS)

clean:
	rm -f $(EXEC)
