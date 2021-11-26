#include "organizacion.h"
using namespace std;
using namespace msclr::interop;
const int NC=5;
class COLA
{
	organizacion cola[NC];
	int frente;
	int final;
public:
	COLA(void);
	bool ColaVacia();
	bool ColaLlena();
	bool Insertar(organizacion);
	bool Eliminar(organizacion &);
	int  GetFrente();

	COLA ThisCola();
	void ThisCola(COLA);
};



