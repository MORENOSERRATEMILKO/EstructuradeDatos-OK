#pragma once
class venta
{
private:
	int cantidad; 
	float precio;
	float total;
public:
	venta(void);
	int Get_cantidad(); 
	int Get_precio(); 
	void Set_precio(float p); 
	void Set_cantidad(int c);
	int Get_total();
	void Set_total(float t);
	float calcular();

};

