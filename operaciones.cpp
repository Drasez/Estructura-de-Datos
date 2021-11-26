#include "StdAfx.h"
#include "OPERACIONES.h"



OPERACIONES::OPERACIONES(void)
{
	COLA();
}
void OPERACIONES::GuardarColaGrilla(DataGridView^  grilla_cola, COLA colita)
{
	int i=0;
	COLA aux=colita.ThisCola();
	grilla_cola->RowCount=LongitudCola(colita);
	while(aux.ColaVacia()==false)
	{
		organizacion orga;
		aux.Eliminar(orga);
		grilla_cola->Rows[i]->Cells[0]->Value=marshal_as<System::String^>(orga.GetEvento());//pa usar a convertir string mas mejor q system
		grilla_cola->Rows[i]->Cells[1]->Value=marshal_as<System::String^>(orga.GetFecha());	
		grilla_cola->Rows[i]->Cells[2]->Value=marshal_as<System::String^>(orga.GetUbi());	
		grilla_cola->Rows[i]->Cells[3]->Value=orga.GetMaxParticipantes();
	    i++;
	}
}

int OPERACIONES::LongitudCola(COLA colita)
{
	int t=0;
	COLA aux;
	aux=colita.ThisCola();
	organizacion orga;
	while(aux.ColaVacia()==false)
	{
	
	  aux.Eliminar(orga);
	
	  t++;
	}
   return t;
}
