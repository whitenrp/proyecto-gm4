#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Monitor{
private:

public:

    bool confirmar_monitor();
    void dar_rutas();
    void dar_fechayhoradisp();
    void reservar_fechayhora1();
    void reservar_fechayhora2();
    void reservar_fechayhora3();
    void reservar_fechayhora4();
   
    void dar_rutas_especiales();
    void dar_fechayhoraespecial();
    void reservar_fechayhoraespecial();
    void imprimirMonitores();
};
