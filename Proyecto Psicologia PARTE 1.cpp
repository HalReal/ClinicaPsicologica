/* Proyecto final: Sistema de clínica psicológica
Parte 1: Pantalla de Inicio - Menu*/

#include <iostream>
#include <string.h>
//#include<fstream> abrir, cerrar, guardar archivos. (Por ahora no se está usando, cuando se unan las partes de Norman y Kisnner se usará)
//#include<array> para arreglos

using namespace std;

string paciente, cif, fecha;
int opc, edad;

int main() {

	cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	cout<<"                        Favor selecciona uno de los siguientes perfiles: \n \n" ;
	cout<<"  1. Estudiante \n  2. Psicologo \n  3. Administrador \n";
	cin>>opc;
	cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	
	if (opc>3 || opc<1)
	{
		cout<<"La opcion que selecciono no existe. Ingrese una opcion valida. \n";
		cin>>opc;
	}
	
	switch (opc){
	
	case 1:	
		cout<<" Bienvenido! \n";
		cout<<" Por favor, ingresa tu CIF y tu contrasenia para entrar a tu registro: \n";
		cout<<" CIF:  ";
		cin>>cif;
		
		int LongitudCIF = cif.lenght();
		
		if (LonfitudCIF =! 8)
		{
			cout<<" Tu CIF debe contener 8 digitos. Vuelve a ingresarlo."
		}
		//Manda a llamar al subprograma que crea un nuevo expediente: Alejandro
		break;
	
	case 2:
		cout<<"Actualizacion de expediente existente: ";
		//Manda a llamar al subprograma que permite ingresar a los expedientes que ya existen: Camila
		break;
		
	case 3:
		cout<<"Creacion de nueva receta medica: \n \n";
		//Manda a llamar al subprograma que crea una nueva receta medica: Halinda
		/*int creararchivo(){
		ofstream archivo; //Declara variable de tipo archivo
		archivo.open("Archive1.txt"); //Abrir y crear un archivo de texto
		cout<<" \n\n\t Hola wenas";
		archivo.close();
		return 0;
		} su makina no pude hacer un txt, ahi se va en consola 7-7
		*/
		
		cout<<"Ingrese el nombre del paciente: ";
		cin>>paciente;
		cout<<"Edad: ";
		cin>>edad;
		
		if (edad>120 || edad<0)
		{
			cout<<"Ingrese una edad valida: ";
			cin>>edad;
		}
		
		cout<<"Ingrese la fecha (DD/MM/AA): ";
		cin>>fecha;
		
		cout<<"Ahora ingrese la cantidad de elementos a recetar: ";
		cin>>cant;
		
		for(int i = 1; i <= cant; i = i + 1)
		{
				cout<<"\nIngrese el enunciado "<< i<< " de la receta medica: \n";
        		cin>>enunciado;
        		cout<<"\nUsted ha recetado: \n"<<enunciado;
		}
		
		cout<<"Usted ha realizado la receta del/la paciente "<< paciente<< " de "<< edad<< " anios, el dia "<< fecha<< ".\n";
		
		break;
	
	
	case 4:	
		cout<<"Personalizacion de expediente y/o receta";
		//Manda a llamar al subprograma que permite ingresar a los expedientes y recetas que ya existen: Nerio
		break;
	};

	return 0;
}
