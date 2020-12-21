#include <iostream>
#include <stdlib.h>

using namespace std;
string nombre_,alex;
void testNombrecorrecto();
inline void setNombre(string nombre){nombre=nombre_;}
inline string getNombre(){return nombre_;}

string correoelectronico_,arovdom;
void testCorreocorrecto();
inline void setCorreoelectronico(string correoelectronico){correoelectronico=correoelectronico_;}
inline string getCorreoelectronico(){return correoelectronico_;}

int main(){
	testNombrecorrecto();
	testCorreocorrecto();
		
	system("pause");
	return 0;
}
void testNombrecorrecto(){
	string nombre_=alex;
	setNombre(nombre_);
	string nombre2=getNombre();
	if (nombre2!=nombre_){
		cout<<"programa incorrecto."<<endl;
		exit(1);
	} 

}

void testCorreocorrecto(){
	string correoelectronico_=arovdom;
	setCorreoelectronico(correoelectronico_);
	string correoelectronico2=getNombre();
	if (correoelectronico2!=correoelectronico_){
		cout<<"programa incorrecto."<<endl;
		exit(1);
	} 

}

