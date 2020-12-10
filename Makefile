main: main.o
	g++ -o main main.o

main.o: main.cpp MyVector.cxx MyVector.h

tests: tests.o
	g++ -o tests tests.o

tests.o: doctest.h MyVector.cxx MyVector.h

clean:
	rm -f a.out main main.o tests tests.o
