//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <thread>
using namespace std;

void func(){
	cout << "called" << endl;
}

int main() {
	thread handle(func);
	handle.join();
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
