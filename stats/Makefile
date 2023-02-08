CFLAGS=-std=c99 -Wall
CC=gcc

stats: stats.o main.o
	$(CC) $(CFLAGS) stats.o main.o -o stats

tests: tests.o stats.o
	$(CC) $(CFLAGS) stats.o tests.o -o tests

main.o: main.c stats.h
	$(CC) $(CFLAGS) -c main.c

tests.o: tests.c stats.h
	$(CC) $(CFLAGS) -c tests.c

stats.o: stats.h stats.c
	$(CC) $(CFLAGS) -c stats.c

gh-test-stats: clean tests
	./tests

clean:
	rm -f stats tests *.o
