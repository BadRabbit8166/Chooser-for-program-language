chooser: src/main.o
	g++ -o bin/chooser src/main.o

main.o: src/main.cpp src/eas.hpp
	g++ -c src/main.cpp
