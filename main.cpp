
#include "derivata.h"

int main() {

	Base  *B; 
	Derivata *D;
	Base b1;
	Derivata d1;
	
	B = &d1;
	
//	B= &b1;

	B->fu1(); //early binding compilazione

	B->fu2(); //late binding  run time 

	B->fu3(); //late binding 

	B->fu4(); //late binding 

//	B->fu5();

//	B->fu4(0);

	cout << endl;
	

	D = &d1;

	D->fu1();   

	D->fu2();  

	D->fu3();

	D->fu4(4);

	D->fu5();

	
}