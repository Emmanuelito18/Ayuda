#ifndef PAIS1_H
#define PAIS1_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

class PAIS1{
	protected://Atributos
	string nombre;
	long int poblacion;
	public://Métodos
		PAIS1(string,long int);//Constructor
		
		~PAIS1();//Destructor
		string mostarNombre(string);
		long int mostrarPoblacion(long int);
		void obtenerInformacion(string,long int);
};

#endif
