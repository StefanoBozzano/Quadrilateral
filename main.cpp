#include<iostream> 
#include<string.h>

using namespace std;



#include "CRectangle.h"
/*
void ProcessRectangle(Rectangle r) {
	
	float temp = r.width; 
	
	r.width = r.height; 
	r.height = temp;
	
}
*/

void ProcessRectangle(Rectangle &r) {
	
	char msg1[1000];
	strcpy(msg1,"scherzone");
	
	char tmps[1000]; 
	cout << endl;
	cout << "######## Process ###########" << endl;
	
	float w = r.GetWidth(); 
	float h = r.GetHeight();	
		
	r.SetWidth(h); 
	r.SetHeight(w);
	
	r.GetText(tmps);
	cout << "Process: " << tmps << endl;  

	r.SetText(msg1);
	
	
	r.Dump(); 
	cout << "######### ######### ##########" << endl;
}

int main() {

	char tmps[1000];
	Rectangle rectA(10,5);
	Rectangle rectB(3,7);
	
	char msg1[1000];
	strcpy(msg1,"prova");
	rectA.SetText(msg1);
		
	cout << endl;
	cout << "****** rectangle A dump ******" << endl;
	rectA.Dump(); 
	cout << "****** ********* ******" << endl;
	cout << "****** rectangle B dump ******" << endl;
	rectB.Dump(); 
	cout << "****** ********* ******" << endl;
	
	

	
	ProcessRectangle(rectA); 
	
	
	cout << endl;
	cout << "****** rectangle A dump ******" << endl;
	rectA.Dump();
	cout << "****** ********* ******" << endl;
	
	return 0;

}