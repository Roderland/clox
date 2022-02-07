SRC = main.c chunk.c memory.c debug.c value.c vm.c compiler.c scanner.c object.c table.c

all:
	cc -std=c99 -g -Wall -Wunused-function $(SRC) -lm -o clox
clean:
	rm clox

