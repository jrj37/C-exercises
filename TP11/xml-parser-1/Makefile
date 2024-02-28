tests: tests.o xmlp.o
	gcc -o tests tests.o xmlp.o

tests.o: tests.c 
	 gcc -o tests.o -c tests.c 

xmlp.o: xmlp.c
	gcc -o xmlp.o -c xmlp.c

clean:
	rm -rf *.o
	rm -f tests