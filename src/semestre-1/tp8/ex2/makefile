CC=gcc
CFLAGS=-Wall -ansi

ex2: main.o complex.o -lm
	$(CC) -o $@ $^

complex.o: complex.c complex.h -lm
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o
