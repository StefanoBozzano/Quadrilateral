#pragma once

#include <iostream>
#include "base.h"



class Derivata : public Base {
public:
	void fu1() { cout << "derivata 1" << endl; }
	void fu2() { cout << "derivata 2" << endl; }
	void fu4(int x) { cout << "derivata 4" << endl; }
	void fu5() { cout << "derivata 5" << endl; }
//	void fu6() { cout << "derivata 6" << endl; }

};
