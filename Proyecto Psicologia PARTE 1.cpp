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
		
		int LongitudCIF = cif.length();
		
		if (LongitudCIF =! 8)
		{
			cout<<" Tu CIF debe contener 8 digitos. Vuelve a ingresarlo.";
			cin>>cif;
		}
		
		cout<<" Ingresa tu contrasenia:  ";
		
		//Manda a llamar al subprograma que contiene las opciones disponibles para estudiantes. 
		break;
	
	case 2:
		
		cout<<" \n Ingreso de psicologo.  \n  Bienvenido! \n  Por favor ingresa tu usuario y contrasenia para ingresar. \n";
		//Manda a llamar al subprograma que contiene las opciones del psicologo
		break;
		
	case 3:
		cout<<" \n Ingreso de administrador.  \n  Bienvenido! \n  Por favor ingresa tu usuario y contrasenia para ingresar. \n";
		//Manda a llamar al subprograma que contiene las opciones del administrador
		break;
		
	};

	return 0;
}
