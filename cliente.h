#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Cliente{
	
	private:
	string nombre_;
	string apellidos_;
	string DNI_;
	string fecha_nacimiento_;
	string correo_electronico_;
	string direccion_;

	public:
	Cliente(string nombre = " ", string apellidos = " ", string DNI = 0, string fecha_nacimiento, string correo_electronico, string direccion)
	
	inline void setNombre(string nombre){nombre_ = nombre;}
	inline string getNombre(){return nombre_;}
	inline void setApellidos(string apellidos){apellidos_ = apellidos;}
	inline string getApellidos(){return apellidos_;}
	inline void setDNI(string DNI){DNI_ = DNI;}
	inline string getDNI(){return DNI_;}
	inline void setFecha_nacimiento(string fecha_nacimiento){fecha_nacimiento_ = fecha_nacimiento;}
	inline string getFecha_nacimiento(){return fecha_nacimiento_;}
	inline void setCorreo_electronico(string correo_electronico){correo_electronico_ = correo_electronico;}
	inline string getCorreo_electronico(){return correo_electronico_;}
	inline void setDireccion(string direccion){direccion_ = direccion;}
	inline string getDireccion(){return direccion_;}
	
	
	inline void setidentificacion_cliente(string nombre, string apellidos, string DNI, string fecha_nacimiento, string correo_electronico, string direccion);
	int setseleccionarruta();
	int setelegir_fechayhora();
	inline void setdar_datos();
	void contactar_monitor();
	string pedir_datos_monitor();
	void setconfirmar_reserva();
	
	
	
	
}//fin clase cliente