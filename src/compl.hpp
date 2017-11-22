#include <iostream>
#include <cstdio>
#include <string>
#include <stdlib.h>
#include <unistd.h>
unsigned int sleep(unsigned int seconds);
using namespace std;
void gam() {
	string langu;
	std::cout << "Here it is getteing a little complicated. But to the next question..\n" << endl;
	std::cout << "Do you want to write (f)uncions for games like Minecraft or do you want a language for (l)ittle games\n" << endl;
	std::cout << "or do you want the language for complex programs or (t)his programm is written in?\n" << endl;
	std::cin >> langu;
	if(langu =="f") {
		std::cout << "That's Java! ;)\n" << endl;
	}
	if(langu=="l") {
		std::cout << "That's C# (C sharp)\n" << endl;
	}
	if(langu=="t") {
		std::cout << "Of cource the best is C++ :3\n" << endl;
	}
}
