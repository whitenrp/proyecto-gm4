#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

class rutas{
	private:
	string dificultad_;
	int longitud_;
	string tipo_trayecto_;
	string horarios_disponibles_;
	string realización_;
	
	public:
	void mostrar();
	void mostrar_fechayhoradisp();
}