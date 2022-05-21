clox:
	cc -std=c99 -g -Wall -Wunused-function src/* -lm -o clox
	chmod +x main.lox && ./main.lox

clean:
	rm clox