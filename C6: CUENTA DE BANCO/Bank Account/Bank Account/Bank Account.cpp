// Bank Account.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include "Cuenta.h"
using namespace std;

int main()
{
	cout<<"Cuenta de banco"<<endl;
	Cuenta persona01;

	persona01.asignar_Nombre("Ricardo");
	persona01.asignar_Cuenta("4060274478");
	persona01.asignar_Interes(2.5);
	persona01.ingreso(1200);
	persona01.reintegro(2);
	cout<<"Nombre: "<<persona01.obtener_Nombre()<<endl;
	cout<<"Cuenta: "<<persona01.obtener_Cuenta()<<endl;
	
	cout<<"Saldo: "<<persona01.estado()<<endl;


	getch();
	return 0;
}

