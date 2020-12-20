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

	void imprimirFicherorutas(){

		std::ifstream file("rutas.txt");

		if(!file){

			std::cout << "Error al abrir el fichero rutas.txt" << std::endl;

		}

		std::string temp;

		while(file != EOF){

			getline(file, temp, '\n');

			std::cout << temp << std::endl;

		}

		file.close();

	}

	void imprimeFicherorutasEspeciales(){

		std::ifstream file("rutas_especiales.txt");

		if(!file){

			std::cout << "Error al abrir el fichero rutas.txt" << std::endl;

		}

		std::string temp;

		while(file != EOF){

			getline(file, temp, '\n');

			std::cout << temp << std::endl;

		}

		file.close();

	}

	void imprimeHorarios(){

		std::ifstream file("fechayhora.txt");

		if(!file){

			std::cout << "Error al abrir el fichero rutas.txt" << std::endl;

		}
		else{

		std::string temp;

		while(file != EOF){

			getline(file, temp, '\n');

			std::cout << temp << std::endl;

		}

		file.close();

		}

	}

	void gestionareservas(std::string info){

		std::ofstream file("reservas.txt");

		if(!file){

			std::cout << "Error al abrir el fichero" << std::endl;

		}
		else{

			while(file != EOF){

				file >> info;

			}

		}

	}


};

#endif