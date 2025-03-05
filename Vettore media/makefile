all:main

clean: main main.o array.o
	rm -rf main main.o array.o

main: main.o array.o
	gcc -o main main.o array.o

main.o: main.c array.h
	gcc -c -o main.o main.c

array.o: array.c array.h
	gcc -c -o array.o array.c