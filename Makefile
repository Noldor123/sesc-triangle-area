run:prog
	./prog
prog:prog.c
	gcc -std=c99 -lm -o prog
build:prog
