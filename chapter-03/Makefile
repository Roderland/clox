SRC = src/*

run: all
	chmod +x main.lox && ./main.lox

all: $(SRC)
	cc -std=c99 -g -Wall -Wunused-function $(SRC) -lm -o clox

clean:
	rm clox

