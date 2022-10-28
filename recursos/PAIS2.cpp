#include "PAIS2.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

/*Constructor*/
PAIS2::PAIS2(string _nombre2,long int _poblacion2){
	nombre2=_nombre2;
	poblacion2=_poblacion2;
}

/*Destructor*/
PAIS2::~PAIS2(){
	cout<<"Le call¢ una bomba n£clear a "<<nombre2<<" y lo destruy¢ por completo junto con su poblacion"<<endl;
	
}

string PAIS2::mostrarNombre2(string nombre2){
	return nombre2;
}

long int PAIS2::mostarPoblacion2(long int poblacion2){
	return poblacion2;
}

void PAIS2::obtenerInformacion2(string _nombre2,long int _poblacion2){
	nombre2=_nombre2;
	poblacion2=_poblacion2;
}
