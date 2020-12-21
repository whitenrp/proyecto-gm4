#include "monitor.h"
#include <string>
#include <iostream>
#include <fstream>

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


void Monitor::dar_rutas(){
	ifstream archivo;
	archivo.open("rutas.txt");
	string texto;
	
	if (archivo.fail()){
		cout<<"Error, Carga de fichero fallida";
		exit(1);
	}
	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	archivo.close();
}
	
	
void Monitor::dar_fechayhoradisp(){
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

//a partir de aqui se reserva la hora

void Monitor::reservar_fechayhora1(){
	ifstream leer;
	ofstream temp;
	string dia,hora,cod,codaux;

	leer.open("fechayhora1.txt");
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
	if(encontrado==false){
		cout<<"Error, Dia no encontrado"<<endl;
	}
	leer.close();
	temp.close();
	
	remove ("fechayhora1.txt");
	rename("temporal.txt","fechayhora1.txt");
}
void Monitor::reservar_fechayhora2(){
	ifstream leer;
	ofstream temp;
	string dia,hora,cod,codaux;

	leer.open("fechayhora2.txt");
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
	if(encontrado==false){
		cout<<"Dia no encontrado"<<endl;
	}
	leer.close();
	temp.close();
	
	remove ("fechayhora2.txt");
	rename("temporal.txt","fechayhora2.txt");
}
void Monitor::reservar_fechayhora3(){
	ifstream leer;
	ofstream temp;
	string dia,hora,cod,codaux;

	leer.open("fechayhora3.txt");
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
	if(encontrado==false){
		cout<<"Dia no encontrado"<<endl;
	}
	leer.close();
	temp.close();
	
	remove ("fechayhora3.txt");
	rename("temporal.txt","fechayhora3.txt");
}
void Monitor::reservar_fechayhora4(){
	ifstream leer;
	ofstream temp;
	string dia,hora,cod,codaux;

	leer.open("fechayhora4.txt");
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
	if(encontrado==false){
		cout<<"Dia no encontrado"<<endl;
	}
	leer.close();
	temp.close();
	
	remove ("fechayhora4.txt");
	rename("temporal.txt","fechayhora4.txt");
}

// aqui se acaba la reserva de hora

void Monitor::dar_fechayhoraespecial(){
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

void Monitor::imprimirMonitores(){
	ifstream leer;
	string texto;
	leer.open("monitores.txt");
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

void Monitor::reservar_fechayhoraespecial(){
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
	if(encontrado==false){
		cout<<"Dia no encontrado, observe los días para volver a seleccionar"<<endl;
	}
	leer.close();
	temp.close();
	
	remove("fechasespeciales.txt");
	rename("temporal.txt","fechasespeciales.txt");
}
