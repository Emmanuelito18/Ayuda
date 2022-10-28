#include "PAIS3.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

/*Constructor*/
PAIS3::PAIS3(string _nombre3,long int _poblacion3){
	nombre3=_nombre3;
	poblacion3=_poblacion3;
}

/*Destructor*/
PAIS3::~PAIS3(){
	cout<<"Le call¢ una bomba n£clear a "<<nombre3<<" y lo destruy¢ por completo junto con su poblacion"<<endl;

}

void PAIS3::obtenerInformacion3(string _nombre3,long int _poblacion3){
	nombre3=_nombre3;
	poblacion3=_poblacion3;
}

string PAIS3::mostrarNombre3(string nombre3){
	return nombre3;
}

long int PAIS3::mostrarPoblacion3(long int poblacion3){
	return poblacion3;
}
