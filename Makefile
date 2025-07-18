cc=gcc
file=tetris.c
build=tetris
flags=-o


run: compile
	./$(build)


compile:
	$(cc) $(file) $(flags) $(build)



	