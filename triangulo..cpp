#include "stdafx.h"
#include "triangulo.h"
//Implementacion de los metodos de la clase
//Declaracion del constructor
triangulo::triangulo(void)
{
	base=5;
	altura=2;
}
//Declaracion del destructor
triangulo::~triangulo(void)
{
}
//Declaración del metodo - funcion
float triangulo::calculararea(float b, float h)
{
	area=(b*h)/2;
	return area;
}
