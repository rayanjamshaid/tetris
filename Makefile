cc=gcc
file=tetris.c
build=tetris
flags=-0

compile:
	$(cc) $(file) $(flags) $(build)

run:
	./$(build)

	