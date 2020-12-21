#include <iostream>
#include <stdlib.h>

using namespace std;
string n1,nombre_,alex;
void testNombrecorrecto();
inline void setNombre(string nombre){nombre=nombre_;}
inline string getNombre(){return nombre_;}

int main(){
	testNombrecorrecto();
		
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
