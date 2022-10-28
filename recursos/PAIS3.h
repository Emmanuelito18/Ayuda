#ifndef PAIS3_H
#define PAIS3_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

class PAIS3{
	protected://Atributos
		string nombre3;
		long int poblacion3;
	public://Métodos
		PAIS3(string,long int);//Constructor
		~PAIS3();//Destructor
		void obtenerInformacion3(string,long int);
		string mostrarNombre3(string);
		long int mostrarPoblacion3(long int);
};

#endif
