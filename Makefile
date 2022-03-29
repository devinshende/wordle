CC=clang

wordle:color.o wordle.o utils.o
	$(CC) color.o wordle.o utils.o -o wordle

%.o:%.c
	$(CC) -c $< -o $@

clean:
	/bin/rm -f wordle *.o
