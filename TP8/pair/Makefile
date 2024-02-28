tests: tests.o pair.o
	gcc -o tests tests.o pair.o

tests.o: tests.c 
	 gcc -o tests.o -c tests.c 

linked-list.o: pair.c
	gcc -o pair.o -c pair.c

clean:
	rm -rf *.o
	rm -f tests