CC=gcc
CFLAGS=-Wall -ansi

ex3: main.o date.o -lm
	$(CC) -o $@ $^

date.o: date.c date.h -lm
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o
