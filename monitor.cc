#include "monitor.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;


Monitor(string DNI, string nombre, string apellidos, int edad, string correoelectronico, string direccion)
{
 	DNI_ = DNI;
	nombre_ = nombre;
	apellidos_ = apellidos;
	edad_ = edad; 
	direccion_ = direccion;
	correoelectronico_=correoelectronico;
}

bool Monitor::confirmar_monitor(){
	string respuesta;
	cout<<"¿Puedes asistir?";
	cin>>respuesta;
	if (respuesta=="si"){
		return true;
	}
	else
		return false;
}


string Monitor::getDar_rutas(){
	ifstream archivo;
	archivo.open("rutas.txt");
	string texto;
	
	if (archivo.fail()){
		cout<<"Carga de fichero fallida";
		exit(1);
	}
	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	archivo.close();
}

void imprimirFicheromonitores(){
	ifstream archivo,
	archivo.open("monitores.txt");
	string texto;
	
	if(archivo.fail()){ cout<<"\t Carga de fichero fallida."<<endl;}
	else{
		cout<<"\t Los monitores disponibles son:"<<endl;
		while(!archivo.eof()){
			getline(archivo,texto);
			cout<<texto<<endl;	
		}
	}
	archivo.close();	
}
	
string Monitor::getDar_fechayhoradisp(){
}

void Monitor::setReservar_fechayhora(){
}

string Monitor::getDar_fechayhoraespecial(){
}

void Monitor::setReservar_fechayhoraespecial(){
}

