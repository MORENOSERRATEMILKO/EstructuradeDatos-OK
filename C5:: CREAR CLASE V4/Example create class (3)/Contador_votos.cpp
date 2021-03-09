#include "StdAfx.h"
#include "Contador_votos.h"


Contador_votos::Contador_votos(void)
{
}
int Contador_votos::Get_carnet(){
	return carnet;
}
	int Contador_votos::Get_voto(){
	return voto;}
	void Contador_votos::Set_carnet(int c){
	carnet = c;}
	void Contador_votos::Set_voto(int v){
	voto = v;}
	int Contador_votos::sumar(){
	voto = voto +1; 
	return voto;

	}
	int Contador_votos::anular_voto(){
	if (voto>=1)
	{	
		voto = voto-1;
		
	}
	return voto;
	}
