all:
	cc -std=c99 -Wall main.c chunk.c memory.c debug.c value.c vm.c -ledit -lm -o main
clean:
	rm main

