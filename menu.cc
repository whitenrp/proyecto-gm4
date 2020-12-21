/*
 ___________________________________________________________________
|                                                                   |
| Proyecto Ingenieria del Software Universidad de Cordoba 2020/2021 |
|___________________________________________________________________|

                            PROGRAMADORES
                  -------------------------------------
                        Nemesio Romero Pino
                        Alex Rovira Domínguez
                        Miguel Molina Galán
                  -------------------------------------
*/

#include<iostream>
#include<cmath>
#include<string>
#include<fstream>
#include "rutas.h"
#include "monitor.h"
//#include "cliente.h"

using namespace std;

	struct Cliente{			//datos de los clientes
	string DNI;
	string nombre;
	string apellidos;
	string fechanacimiento;
	string correoelectronico;
	int problemasfisicos;	//este int=2 cuando el cliente no posee problemas físicos, cuando =1 posée y se mostrará las rutas especiales
	};

int main(){

	Rutas R1;
	Monitor M1;
	
	int opcion_menu=0;
	struct Cliente cliente1;
	cout<<""<<endl;
    cout<<"\t ____________________________________________________________"<<endl;
	cout<<"\t|                                                            |"<<endl;
	cout<<"\t|  Ha accedido al sistema de parques narutales de Andalucía  |"<<endl;
	cout<<"\t|____________________________________________________________|"<<endl;
	cout<<"\t|                                                            |"<<endl;
	cout<<"\t|         Antes de continuar deberá identificarse            |"<<endl;
	cout<<"\t|____________________________________________________________|"<<endl;
	cout<<"\t|                                                            |"<<endl;
	cout<<"\t|         Ingrese su nombre:";
	cin>>cliente1.nombre;
	cout<<"\t|         Ingrese sus apellidos separados con_:";
	cin>>cliente1.apellidos;
	cout<<"\t|         Ingrese su DNI:";
	cin>>cliente1.DNI;
	cout<<"\t|         Ingrese su fecha de nacimiento:";
	cin>>cliente1.fechanacimiento;
	cout<<"\t|         Ingrese su correo electrónico:";
	cin>>cliente1.correoelectronico;
	cout<<"\t|         Posée problemas físicos o de movilidad reducida?:"<<endl;
	cout<<"\t|         1/Si           2/No\t\t";
	cin>>cliente1.problemasfisicos;
	cout<<"\t|____________________________________________________________|"<<endl;
	
do
	{
	    cout<<"\t ____________________________________________________________"<<endl;
		cout<<"\t|                                                            |"<<endl;
		cout<<"\t|           Seleccione la opción deseada:                    |"<<endl;
		cout<<"\t|           1. Ver rutas disponibles.                        |"<<endl;
		cout<<"\t|           2. Ver horarios disponibles.                     |"<<endl;
		cout<<"\t|           3. Ver monitore disponibles.                     |"<<endl;
		cout<<"\t|           4. Realizar reserva.                             |"<<endl;
		cout<<"\t|           5. Salir del programa...                         |"<<endl;
		cout<<"\t|____________________________________________________________|"<<endl;
		
		cin>>opcion_menu;
		switch(opcion_menu)
		{
			case 1:
			{
				cout<<"\t Las rutas disponibles son:"<<endl;
				
				if(cliente1.problemasfisicos==2){R1.imprimirFicherorutas();}//muestra las rutas para los clientes que no tienen problemas fisicos
				else{R1.imprimeFicherorutasEspeciales();}
			
			}break; //fin mostrarrutas
			case 2:
			{
				
				M1.dar_fechayhoradisp();
						
			}break;//fin realizar reserva
			case 3:
			{
				
				M1.imprimirMonitores(); //abrir fichero de monitores y imprimir por pantalla
						
			}break;
			case 4:
			{

				M1.reservar_fechayhora();
						
			}break;
			case 5:
			{
				cout<<"\t Fin de programa..."<<endl;
						
			}break;
			default:{
			cout<<"\t Opción no válida, vuelva a introducirla.\n"<<endl;	
			}break;
		}
	}while(opcion_menu!=5);

}//fin main
