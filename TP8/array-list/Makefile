tests: tests.o array-list.o
	gcc -o tests tests.o array-list.o

tests.o: tests.c 
	 gcc -o tests.o -c tests.c 

linked-list.o: array-list.c
	gcc -o array-list.o -c array-list.c

clean:
	rm -rf *.o
	rm -f tests