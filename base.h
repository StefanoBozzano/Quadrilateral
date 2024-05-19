#pragma once

#include <iostream>
using namespace std;

class Base {  
public:
	void fu1() { cout << "base 1" << endl; }
	virtual void fu2() { cout << "base 2" << endl; } 
	virtual void fu3() { cout << "base 3" << endl; }
	virtual void fu4() { cout << "base 4" << endl; } 
//	virtual void fu6() = 0;

};