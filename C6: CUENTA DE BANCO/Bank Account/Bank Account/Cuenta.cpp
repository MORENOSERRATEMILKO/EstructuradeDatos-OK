#include "StdAfx.h"
#include "Cuenta.h"


Cuenta::Cuenta(void)
{
}

	void Cuenta::asignar_Nombre(string nom){
	if(nom.length()==0)
	{
		cout<<"Error, no se ha asignado un nombre"<<endl;
		return;
	}
	nombre = nom;

	}
	void Cuenta::asignar_Cuenta(string cue){
	cuenta = cue;
	}
	string Cuenta::obtener_Nombre(){
	return nombre;
	}
	string Cuenta::obtener_Cuenta(){
		return cuenta;
	}
	double Cuenta::obtener_Interes(){
		return tipoDeInteres;
	}
	double Cuenta::estado(){
		return saldo;
	}
	void Cuenta::asignar_Interes(double interes){
	tipoDeInteres = interes;
	}
	void Cuenta::reintegro(double cantidad){
		if((saldo-cantidad)<0)
		{
			cout<<"Error se quedó yesca"<<endl;
			return;
		}
		saldo=saldo-cantidad;

	}
	void Cuenta::ingreso(double cantidad){
		if (cantidad<0)
		{
			cout<<"Error: Cantidad menor a 0"<<endl; 
			return;
		}
		else 
		{
			saldo=saldo+cantidad;
		}

		

	}


Cuenta::~Cuenta(void)
{
}
