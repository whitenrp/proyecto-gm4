/*
tests.cc
*/

#include <iostream>
#include <string>
#include "rutas.h"

	void testimprimirFicherorutas(){

		Rutas R1;

		if(R1.imprimirFicherorutas() != true){

			std::cout << "Error test 1" << std::endl;

		}

	}

	void testimprimeFicherorutasEspeciales(){

		Rutas R1;

		if(R1.imprimeFicherorutasEspeciales() != true){

			std::cout << "Error test 2" << std::endl;

		}

	}


	void testgestionareservas(){

		Rutas R1;

		std::string info = "ruta 1 - dificil, fechayhora2, 12345678A";

		if(R1.gestionareservas(info) != true){

			std::cout << "Error test 3" << std::endl;

		}

	}

int main(){

	std::cout << "Test 1 'testimprimirFicherorutas'" << std::endl;

	testimprimirFicherorutas();

	std::cout << "OK !!!" << std::endl;

	std::cout << "Test 2 'testimprimeFicherorutasEspeciales'" << std::endl;

	testimprimeFicherorutasEspeciales();

	std::cout << "OK !!!" << std::endl;

	std::cout << "Test 3 'testgestionareservas'" << std::endl;

	testgestionareservas();

	std::cout << "OK !!!" << std::endl;

	return 0;

}