#include "StdAfx.h"
#include "organizacion.h"

organizacion::organizacion(void)
{
	maxparticipantes=0;
	ubi="";
	evento="";
	fecha="";
}

void organizacion::SetEvento(string evento)
{
	this->evento=evento;
}
void organizacion::SetUbi(string ubi)
{
	this->ubi=ubi;
}
void organizacion::SetFecha(string fecha)
{
	this->fecha=fecha;
}
void organizacion::SetMaxParticipantes(int maxparticipantes)
{
	this->maxparticipantes=maxparticipantes;
}
string organizacion::GetEvento()
{
	return evento;
}
string organizacion::GetUbi()
{
	return ubi;
}
string organizacion::GetFecha()
{
	return fecha;
}
int organizacion::GetMaxParticipantes()
{
	return maxparticipantes;
}

	