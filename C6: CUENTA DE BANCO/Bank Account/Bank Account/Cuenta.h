#include <iostream>
#include <string.h>
using namespace std;



class Cuenta
{
private:
	
	double tipoDeInteres; 
	double saldo; 
	string cuenta;
	string nombre;

public:
	Cuenta(void);
	~Cuenta(void);
	void asignar_Nombre(string nom); 
	void asignar_Cuenta(string cue);
	string obtener_Nombre();
	string obtener_Cuenta();
	double obtener_Interes();
	double estado();
	void asignar_Interes(double interes);
	void reintegro(double cantidad);
	void ingreso(double cantidad);
};

