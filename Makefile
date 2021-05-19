all: main

remake: clean main

main: main.o
	g++ -g -std=c++11 main.o functions.o -o Run.exe

main.o: main.cpp
	g++ -g -std=c++11 -c main.cpp functions.cpp

clean:
	rm *.o Run.exe
