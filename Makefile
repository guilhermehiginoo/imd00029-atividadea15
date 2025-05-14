main: main.o fila.o
	gcc -Wall -Wextra -std=c11 main.o fila.o -o main  

main.o: main.c
	gcc -c main.c

fila.o: fila.c
	gcc -c fila.c

run: main
	./main

clean:
	rm -f main *.o