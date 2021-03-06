/*
tests.cc
*/

#include <iostream>
#include <string>
#include "rutas.h"
#include "monitor.h"

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

void testImprimirmonitores(){

        Monitor M1;

        if(M1.imprimirMonitores() != true){

            std::cout << "Error test imprimirMonitores()" << std::endl;

        }
}

void testDar_fechayhoradisp(){

        Monitor M1;

        if(M1.dar_fechayhoradisp() != true){

            std::cout << "Error test dar_fechayhoradisp()" << std::endl;
}
	
	void testgestionareservas(){

		Rutas R1;

		std::string info = "ruta 1 - dificil, fechayhora2, 12345678A";

		if(R1.gestionareservas(info) != true){

			std::cout << "Error test 3" << std::endl;

		}

	}

void testConfirmar_monitor(){
	
	bool resultado=true;
	
	if (confirmar_monitor()==true){
		cout<<	"OK";
	}
	else{
		cout<<	"Error en confirmar_monitor(). "<<endl;
}
	
}
void testDar_fechayhoraespecial(){

	Monitor M1;

	if(M1.dar_fechayhoraespecial() != true){

		std::cout << "Error test dar_fechayhoraespecial()" << std::endl;

	}

}
	
	
int main(){

	std::cout << "Test 1 'testimprimirFicherorutas'" << std::endl;

	testimprimirFicherorutas();

	std::cout << "Test 1 'testImprimirmonitores'" << std::endl;

	testImprimirmonitores();
	
	std::cout << "Test 1 'testDar_fechayhoradisp'" << std::endl;

	testDar_fechayhoradisp();
	
	std::cout << "Test 1 'testgestionareservas'" << std::endl;

	testgestionareservas();
	
	std::cout << "Test 1 'testConfirmar_monitor'" << std::endl;

	testConfirmar_monitor();
	
	std::cout << "Test 1 'testDar_fechayhoraespecial'" << std::endl;

	testDar_fechayhoraespecial();
	
	std::cout << "OK !!!" << std::endl;

	std::cout << "Test 2 'testimprimeFicherorutasEspeciales'" << std::endl;

	testimprimeFicherorutasEspeciales();

	std::cout << "OK !!!" << std::endl;

	std::cout << "Test 3 'testgestionareservas'" << std::endl;

	testgestionareservas();

	std::cout << "OK !!!" << std::endl;

	return 0;

}
