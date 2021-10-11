SRC = main.c chunk.c memory.c debug.c value.c vm.c compiler.c scanner.c

all:
	cc -std=c99 -g -Wall -Wunused-function $(SRC) -ledit -lm -o clox
clean:
	rm clox

