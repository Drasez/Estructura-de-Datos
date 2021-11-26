#include "StdAfx.h"
#include "COLA.h"


COLA::COLA(void)
{
	frente=-1;
	final=-1;
}
bool COLA::ColaVacia()
{
	return frente==final;
}
bool COLA::ColaLlena()
{
	return final==NC-1;
}
bool COLA::Insertar(organizacion orga)
{
	if(ColaLlena())
		return false;
	final++;
	cola[final]=orga;
	return true;
}
bool COLA::Eliminar(organizacion &orga)
{
	if(ColaVacia())
		return false;
	frente++;
	orga=cola[frente];
	return true;	
}
int  COLA::GetFrente()
{
	return frente+1;
}

COLA COLA::ThisCola()
{
	return *this;
}

void COLA::ThisCola(COLA x)
{
*this=x;

}
