CC = g++
CFLAGS = -g -Wall
LFLAGS = -lraylib
SRC = main.cpp ball.cpp Paddle.cpp CpuPaddle.cpp
EXEC = pong

.PHONY: all clean

all: $(EXEC)
	./$(EXEC)

$(EXEC): $(SRC)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRC) $(LFLAGS)

clean:
	rm -f $(EXEC)
