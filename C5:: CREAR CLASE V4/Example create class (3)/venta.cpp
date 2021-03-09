#include "StdAfx.h"
#include "venta.h"


venta::venta(void)
{
	
}
int venta::Get_cantidad(){
	return cantidad;
	}

	int venta::Get_precio()
		{
			return precio;
	}
	void venta::Set_precio(float p)
		{
			precio=p;
	}
	void venta::Set_cantidad(int c)
		{
			cantidad = c;
	}

	int venta::Get_total()
	{
		return total;
	}

	void venta::Set_total(float t){
		total=t;
	}

	float venta::calcular(){
		total = cantidad*precio;
		return total;
	}

