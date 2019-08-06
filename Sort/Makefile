CC=gcc
CFLAGS=-c -Wall


all: hello clean

hello: main.o randomize.o bubbleSort.o selectionSort.o quickSort.o
	$(CC) main.c randomize.c bubbleSort.c selectionSort.c quickSort.c -o mybin

main.o: main.c
	$(CC) $(CFLAGS) main.c

randomize.o: randomize.c
	$(CC) $(CFLAGS) randomize.c

bubbleSort.o: bubbleSort.c
	$(CC) $(CFLAGS) bubbleSort.c

selectionSort.o: selectionSort.c
	$(CC) $(CFLAGS) selectionSort.c

quickSort.o: quickSort.c
	$(CC) $(CFLAGS) quickSort.c

clean:
	rm -rf *.o