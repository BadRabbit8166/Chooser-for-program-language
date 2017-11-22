#include <iostream>
#include <cstdio>
#include <string>
#include <stdlib.h>
#include <unistd.h>
unsigned int sleep(unsigned int seconds);
using namespace std;
void easy() {
  string langu;
  std::cout << "Ok. Now let's go further.\n" << endl;
  std::cout << "What do I define with ,,easy to learn''?\n" << endl;
  std:cout << "With these you can for instance easily program a program that prints in ''Hello World''.\n" << endl;
  std::cout << "Now, do you want to programm (m)icrocontrollers or do you just want to write (s)imple programms?\n" << endl;
  std::cin >> langu;
  if(langu=="m") {
    std::cout << "With that option I think that The Arduino project is nice for you :)\n" << endl;
    std::cout << "You can programm with a kind of C code, but you must buy a Arduino to work properly.\n" << endl;
    sleep(5);
    system("chromium-browser http://Arduino.cc/");
  }
  if(langu=="s") {
	  std::cout << "I think Python is the right choose for you.\n" << endl;
	  std::cout << "That's VERY easy to learn and to handle." << endl;
	  sleep(5);
	  system("chromium-browser https://www.learnpython.org/");
  }
}
