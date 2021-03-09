#pragma once
class Contador_votos
{
private: 
	int carnet; 
	int voto; 
	int voto_suma; 
	int voto_resta(); 
public:
	Contador_votos(void);
	int Get_carnet();
	int Get_voto();
	void Set_carnet(int c);
	void Set_voto(int v);
	int sumar();
	int anular_voto();
};

