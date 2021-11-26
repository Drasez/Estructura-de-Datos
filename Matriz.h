#include "stdafx.h"
#include "iostream"
using namespace std;

typedef int tipoElem;
const int MAX_FIL=50;
const int MAX_COL=50;

class Matriz
{
private:
   tipoElem m[MAX_FIL][MAX_COL];
   int fil;
   int col;

public:
   Matriz(){
	  fil=0;	  
	  col=0;
   }

void setElem(tipoElem x,int i,int j){
   m[i][j]=x;
}

int getElem(int i, int j){
  return m[i][j];
}

void setFil(int f){
  fil=f;
}

int getFil(){
  return fil;
}

void setCol(int c){
  col=c;
}

int getCol(){
  return col;
}

void leer();
void mostrar();

}; //end class

void Matriz::leer()
{
	int f,c,x;
	cout<<"Cantidad filas:";
	cin>>f; 
	cout<<"Cantidad filas:";
	cin>>c; 
	setFil(f); setCol(c);
	for(int i=0;i<f;i++){
      for(int j=0;j<c;j++){
        cout<<"Elem:"; cin>>x;
	    setElem(x,i,j);
	  }
	}
}

void Matriz::mostrar()
{
    for(int i=0;i<getFil();i++){
      for(int j=0;j<getCol();j++){
        cout<<getElem(i,j)<<"  ";	    
	  }
	  cout<<endl;
	}	
}


