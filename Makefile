lab2make: main.o isEven.o
	gcc -o lab2make main.o isEven.o
main.o: main.c
	gcc -c main.c

isEven.o: isEven.c
	gcc -c isEven.c

clean:
	rm -f *.o lab2make
