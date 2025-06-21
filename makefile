cc = gcc
files = tetris.c
exe = tetris
flags = -o

run: compile
	./$(exe)

compile:
	$(cc) $(files) $(flags) $(exe)