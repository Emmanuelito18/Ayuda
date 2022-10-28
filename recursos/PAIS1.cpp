#include "PAIS1.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

/*Constructor*/
PAIS1::PAIS1(string _nombre,long int _poblacion){
	nombre=_nombre;
	poblacion=_poblacion;
}

/*Destructor*/
PAIS1::~PAIS1(){
	cout<<"Le call¢ una bomba n£clear a "<<nombre<<" y lo destruy¢ por completo junto con su poblacion"<<endl;
}

string PAIS1::mostarNombre(string nombre){
	return nombre;
}

long int PAIS1::mostrarPoblacion(long int poblacion){
	return poblacion;
}

void PAIS1::obtenerInformacion(string _nombre,long int _poblacion){
	nombre=_nombre;
	poblacion=_poblacion;
}
