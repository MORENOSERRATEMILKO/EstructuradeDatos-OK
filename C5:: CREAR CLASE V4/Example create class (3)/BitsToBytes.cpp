#include "StdAfx.h"
#include "BitsToBytes.h"


BitsToBytes::BitsToBytes(void)
{
}

	int BitsToBytes::Get_bites(){
	return bites;}
	
	int BitsToBytes::Get_bytes(){return bytes;}
	
	void BitsToBytes::Set_bites(int bites_mb){
	bites=bites_mb;}
	
	void BitsToBytes::Set_bytes(int bytes_MB){
	bytes=bytes_MB;}
	
	double BitsToBytes::calcular_MB_to_mb(){
	return (bytes*8);
	}
	
	double BitsToBytes::calcular_mb_to_MB(){
		return (bites/8);
	}
