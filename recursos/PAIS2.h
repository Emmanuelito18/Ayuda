#ifndef PAIS2_H
#define PAIS2_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

class PAIS2{
	protected://Atributos
		string nombre2;
		long int poblacion2;
	public://Métodcos
		PAIS2(string,long int);//Constructor
		~PAIS2();//Destructor
		string mostrarNombre2(string);
		long int mostarPoblacion2(long int);
		void obtenerInformacion2(string,long int);
};

#endif
