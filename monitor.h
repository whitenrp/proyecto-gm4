#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Monitor{
private:
int edad_;
string nombre_;
string apellidos_;
string DNI_;
string correoelectronico_;
string direccion_;

public:
    Monitor(){
        string DNI_="";
        int edad_=0;
        string nombre_="";
        string apellidos_="";
        string correoelectronico_="";
        string direccion_="";
    }
    inline void setEdad(int edad){edad=edad_;}
    inline int getEdad(){return edad_;}
    inline void setNombre(string nombre){nombre=nombre_;}
    inline string getNombre(){return nombre_;}
    inline void setApellidos(string apellidos){apellidos=apellidos_;}
    inline string getApellidos(){return apellidos_;}
    inline void setDNI(string DNI){DNI=DNI_;}
    inline string getDNI(){return DNI_;}
    inline void setCorreoelectronico(string correoelectronico){correoelectronico=correoelectronico_;}
    inline string getCorreoelectronico(){return correoelectronico_;}
    inline void setDireccion(string direccion){direccion=direccion_;}
    inline string getDireccion(){return direccion_;}

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
