#include "monitor.h"

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
	getline(cin,respuesta);
	if (respuesta=="si"){
		return true;
	}
	else
		return false;
}

void Monitor::setBuscar_rutas_disponibles(){
}

string Monitor::getDar_rutas(){
}
void Monitor::setBuscar_fechayhoradisp(){
}
string Monitor::getDar_fechayhoradisp(){
}
void Monitor::setBuscar_rutas_especiales(){
}
void Monitor::setReservar_fechayhora(){
}

