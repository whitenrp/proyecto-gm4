#include "monitor.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
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
	
	
string Monitor::getDar_fechayhoradisp(){
	ifstream leer;
	string texto;
	leer.open("fechayhora.txt");
	if (leer.fail()){
		cout<<"Error al abrir el archivo";
		exit(1);
	}
	while (!leer.eof()){
		getline(leer,texto);
		cout<<texto<<endl;
	}
	leer.close();
}

void Monitor::setReservar_fechayhora(){
	ifstream leer;
	ofstream temp;
	string dia,hora,cod,codaux;

	leer.open("fechayhora.txt");
	temp.open("temporal.txt");
	leer>>dia;
	leer>>hora;
	
	if (leer.fail()){
		cout<<"Error al abrir el archivo";
		exit(1);
	}
	bool encontrado=false;
	cout<<"Ingrese el codigo del dia escogido: ";
	cin>>codaux;
	
	while (!leer.eof()){
		leer>>cod;	
		if(cod==codaux){
			encontrado=true;
			cout<<" dia: "<<dia;
			cout<<" hora: "<<hora;
			cout<<" codigo: "<<cod;
			cout<<endl;
			cout<<"reservado"<<endl;			
		}
		else{
			temp<<dia<<" "<<hora<<" "<<cod<<endl;
		}
		leer>>dia;
		leer>>hora;
	}
	if(encontrado=false){
		cout<<"Dia no encontrado"<<endl;
	}
	leer.close();
	temp.close();
	
	remove ("fechayhora.txt");
	rename("temporal.txt","fechayhora.txt");
}


string Monitor::getDar_fechayhoraespecial(){
	ifstream leer;
	string texto;
	leer.open("fechasespeciales.txt");
	if (leer.fail()){
		cout<<"Error al abrir el archivo";
		exit(1);
	}
	while (!leer.eof()){
		getline(leer,texto);
		cout<<texto<<endl;
	}
	leer.close();	
}

void imprimirMonitores(){
	std::ifstream file("monitores.txt");
	if(!file){
		std::cout << "Error al abrir el fichero monitores.txt" << std::endl;
	}
	std::string temp;
	while(getline(file, temp, '\n')){
		std::cout << temp << std::endl;
	}
	file.close();
}

void Monitor::setReservar_fechayhoraespecial(){
		ifstream leer;
	ofstream temp;
	string dia,hora,cod,codaux;

	leer.open("fechasespeciales.txt");
	temp.open("temporal.txt");
	leer>>dia;
	leer>>hora;
	
	if (leer.fail()){
		cout<<"Error al abrir el archivo";
		exit(1);
	}
	bool encontrado=false;
	cout<<"Ingrese el codigo del dia escogido: ";
	cin>>codaux;
	
	while (!leer.eof()){
		leer>>cod;	
		if(cod==codaux){
			encontrado=true;
			cout<<" dia: "<<dia;
			cout<<" hora: "<<hora;
			cout<<" codigo: "<<cod;
			cout<<endl;
			cout<<"reservado"<<endl;			
		}
		else{
			temp<<dia<<" "<<hora<<" "<<cod<<endl;
		}
		leer>>dia;
		leer>>hora;
	}
	if(encontrado=false){
		cout<<"Dia no encontrado"<<endl;
	}
	leer.close();
	temp.close();
	
	remove("fechasespeciales.txt");
	rename("temporal.txt","fechasespeciales.txt");
}

