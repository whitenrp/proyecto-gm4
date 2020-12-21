/*
clase rutas
*/

#ifndef RUTAS_H
#define RUTAS_H

#include <string>
#include <iostream>
#include <fstream>

class Rutas{

private:

std::string dificultad_; //facil, medio, dificil

int longitud_; //km

std::string tipoTrayecto_; //montañoso, llano, etc

std::string horariosDisponibles_; //muestra horarios

std::string realizacion_; //como se recorre la ruta

public:

	Rutas(){

		this->dificultad_ = "";

		this->longitud_ = 0;

		this->tipoTrayecto_ = "";

		this->horariosDisponibles_ = "";

		this->realizacion_ = "";

	}

	bool imprimirFicherorutas(){

		std::ifstream file("rutas.txt");

		if(!file){

			std::cout << "Error al abrir el fichero rutas.txt" << std::endl;

		}

		std::string temp;

		while(getline(file, temp, '\n')){

			std::cout << temp << std::endl;

		}

		file.close();

		return true;

	}

	bool imprimeFicherorutasEspeciales(){

		std::ifstream file("rutas_especiales.txt");

		if(!file){

			std::cout << "Error al abrir el fichero rutas.txt" << std::endl;

		}

		std::string temp;

		while(getline(file, temp, '\n')){

			std::cout << temp << std::endl;

		}

		file.close();

		return true;

	}

	bool imprimefechayhora1(){

		std::string temp;

		std::ifstream file1("fechayhora1.txt");

		if(!file1){

			std::cout << "Error al abrir el fichero rutas.txt" << std::endl;

		}
		else{

		while(getline(file1, temp, '\n')){

			std::cout << temp << std::endl;

		}

		file1.close();

		}

		return true;

	}

	bool imprimefechayhora2(){

		std::string temp;

		std::ifstream file2("fechayhora2.txt");

		if(!file2){

			std::cout << "Error al abrir el fichero rutas.txt" << std::endl;

		}
		else{

		while(getline(file2, temp, '\n')){

			std::cout << temp << std::endl;

		}

		file2.close();

		}

		return true;

	}

	bool imprimefechayhora3(){

		std::string temp;

		std::ifstream file3("fechayhora3.txt");

		if(!file3){

			std::cout << "Error al abrir el fichero rutas.txt" << std::endl;

		}
		else{

		while(getline(file3, temp, '\n')){

			std::cout << temp << std::endl;

		}

		file3.close();

		}

		return true;

	}

	bool imprimefechayhora4(){

		std::string temp;

		std::ifstream file4("fechayhora4.txt");

		if(!file4){

			std::cout << "Error al abrir el fichero rutas.txt" << std::endl;

		}
		else{

		while(getline(file4, temp, '\n')){

			std::cout << temp << std::endl;

		}

		file4.close();

		}

		return true;

	}

	bool gestionareservas(std::string info){

		std::ofstream file("reservas.txt");

		if(!file){

			std::cout << "Error al abrir el fichero" << std::endl;

		}
		else{

			file << info;

		}

		return true;

	}


};

#endif