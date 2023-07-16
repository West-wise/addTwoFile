#Makefile
all: add

add: add.o
	g++ -o add add.cpp

clean:
	rm -f add
	rm -f *.o
