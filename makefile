Lab1: main.o Game.o Excutive.o
	g++ -std=c++11 -g -Wall main.o Game.o Excutive.o -o Lab1

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

Game.o: Game.h
	g++ -std=c++11 -g -Wall -c Game.cpp

Excutive.o: Excutive.h
	g++ -std=c++11 -g -Wall -c Excutive.cpp
clean:
	rm *.o Lab1
