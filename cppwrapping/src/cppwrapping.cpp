//============================================================================
// Name        : cppwrapping.cpp
// Author      : Hersh Godse
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Include libhersh library intended for c compiler in c++ program
extern "C" {
    #include "libhersh.h"
}

int main() {
	cout << "Hello World from Hersh!" << endl;
	cout << "sum = " << addNum(5,4) << endl;
	cout << "difference = " << subNum(5,4) << endl;
	cout << "product = " << multNum(5,4) << endl;
	cout << getString("Hello World again!");
	return 0;
}
