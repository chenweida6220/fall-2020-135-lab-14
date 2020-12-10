main: main.o
	g++ -o main main.o

main.o: main.cpp MyVector.cxx MyVector.h

clean:
	rm -f a.out main main.o
