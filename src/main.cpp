#include <iostream>
#include <cstdio>
#include <string>
#include "eas.hpp"
#include "compl.hpp"
#include <unistd.h>
#include <stdlib.h>
unsigned int sleep(unsigned int seconds);
using namespace std;
int main() {
	string langu;
	std::cout << "This program is made for you to choose the right language to program," << endl;
	std::cout << "if you haven't chosen yet.\n" << endl;
	std::cout << "Please type the letters in the brackets\n" << endl;
	std::cout << "Let us just start :)\n" << endl;
	std::cout << "Do you want to write (w)eb programs/sites or do you want a program to run on the (c)omputer?\n" << endl;
	std::cin >> langu;
	if(langu=="w") {
		std::cout << "Then HTML and CSS is the right choyce." << endl;
		std::cout << "If you want to make your make website dynamic, you can add a PHP or a Java script. ;)\n" << endl;
		std::cout << "Thank you for using my program ;D\n" << endl;
		std::cout << "Bye\n" << endl;
	}
	if (langu=="c") {
		std::cout << "Do you want a language, that is (e)asy to learn, or a language for (g)ames and more complex programs?" << endl;
		std::cout << "or do you want a language with wich you can work in (m)athematics\n" << endl;
		std::cin >> langu;
		if(langu=="e") {
		  easy();
		}
		if(langu=="g") {
			gam();
		}
		if(langu=="m") {
			std::cout << "The right choyce is Pascal! :3\n" << endl;
			sleep(2);
			system("chromium-browser https://de.wikipedia.org/wiki/Pascal_(Programmiersprache)");
		}
	}
return 0;
}
