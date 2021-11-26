#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <conio.h>
#include "COLA.h"

using namespace System::Windows::Forms;
using namespace std;
using namespace msclr::interop;


class OPERACIONES:public COLA 
{
public:
	OPERACIONES(void);
	void GuardarColaGrilla(DataGridView^  grilla_cola, COLA colita);
	int LongitudCola(COLA colita);
	// programar el void Eliminar(); si nos da el tiempo	
};


