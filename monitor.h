#include <iostream>
#include <string>
 
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
Monitor(string DNI, int edad=0, string nombre="", string apellidos="", string correoelectronico, string direccion)

inline void setEdad(int edad){edad=edad_;}
inline int getEdad(){return edad;}
inline void setNombre(string nombre){nombre=nombre_;}
inline string getNombre(){return nombre_;}
inline void setApellidos(string apellidos){apellidos=apellidos_;}
inline string getApellidos(){return apellidos_;}
inline void setDNI(string dni){DNI=DNI_;}
inline string getDNI(){return DNI_;}
inline void setCorreoelectronico(string correoelectronico){correoelectronico=correoelectronico_;}
inline string getCorreoelectronico(){return correoelectronico_;}
inline void setDireccion(string direccion){direccion=direccion_;}
inline string getDireccion(){return direccion_;}
  
inline void setDar_datos_monitor(string nombre, string apellidos, string DNI, int edad, string correoelectronico, string direccion){nombre=nombre_,apellidos=apellidos_,DNI=DNI_,edad=edad_,correoelectronico=correoelectronico_,direccion=direccion_;}
inline string getDar_datos_monitor(){return nombre_, apellidos_, DNI_, edad_, correoelectronico_, direccion_;}

bool confirmar_monitor();
string getDar_rutas();
string getDar_fechayhoradisp();
void Dar_rutas_especiales();
void setReservar_fechayhora();


}
