#include<iostream>

#include "CRectangle.h"
#include "CRhombus.h"




/*
void Draw(Quadrilateral** list) {
	
	cout<< list[4]->GetArea() << endl;
}
*/

int main() {
/*	
	Rectangle rectA(10,5);
	Rectangle rectB(3,7);
	Rhombus rhoC(2,1);
	Rhombus rhoD(7,3);
	Rectangle rectE(5,6);
	
	Quadrilateral* list[5]; 
	
	list[0]= &rectA;
	list[1]= &rectB; 
	list[2]= &rhoC;
	list[3]= &rhoD;
	list[4]= &rectE;
	
	Draw(list);
*/	


	Quadrilateral *A, *B, *C; 
	float s1,s2,s3,s4;
	
	Rectangle rectA(10,5);
	Rectangle rectB(3,7);
	Rhombus rhoC(2,1);
	
	A = &rectA;
	B = &rectB;
	C = &rhoC;
	

	cout << endl;
	cout << "**** quadrilateral A ****" << endl;
	A->Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** quadrilateral B ****" << endl;
	B->Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** quadrilateral C ****" << endl;
	C->Dump(); 
	cout << "**** ***** ****" << endl;
	
	cout << endl;
	cout << "**** rectangle A ****" << endl;
	rectA.Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** rectangle B ****" << endl;
	rectB.Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** rectangle C ****" << endl;
	rhoC.Dump(); 
	cout << "**** ***** ****" << endl;
	
	return 0;

}