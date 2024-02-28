
CFLAGS?=-g -Werror -Wall -Wextra

all: tests space-to-tab

space-to-tab: space-to-tab.o main.o
	gcc -o space-to-tab space-to-tab.o main.o

main.o: main.c
	gcc $(CFLAGS) -o main.o -c main.c

tests: space-to-tab.o tests.o
	gcc -o tests space-to-tab.o tests.o
space-to-tab.o: space-to-tab.c
	gcc $(CFLAGS) -o space-to-tab.o -c space-to-tab.c
tests.o: tests.c
	gcc $(CFLAGS) -o tests.o -c tests.c

clean:
	rm -rf space-to-tab
	rm -rf tests
	rm -rf *.o
