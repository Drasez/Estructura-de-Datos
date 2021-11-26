#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
using namespace msclr::interop;

class organizacion
{
	string evento; 
	string ubi;
	string fecha;
	int maxparticipantes;

public:
	organizacion(void);
    void SetEvento(string);
	void SetUbi(string);
	void SetFecha(string);
	void SetMaxParticipantes(int);

	string GetEvento();
	string GetUbi();
	string GetFecha();
	int GetMaxParticipantes();

};


