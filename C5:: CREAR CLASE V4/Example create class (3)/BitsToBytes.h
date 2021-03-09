#pragma once
class BitsToBytes
{
private: 
	int bites;
	int bytes;
public:
	BitsToBytes(void);
	int Get_bites();
	int Get_bytes();
	void Set_bites(int bites_mb);
	void Set_bytes(int bytes_MB);
	double calcular_MB_to_mb();
	double calcular_mb_to_MB();
};

