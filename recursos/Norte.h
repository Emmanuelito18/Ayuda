#ifndef NORTE_H
#define NORTE_H

#include "Norte.h"
#include "PAIS1.h"
#include "PAIS2.h"
#include "PAIS3.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

class Norte:public PAIS1,public PAIS2, public PAIS3{
	private://Atributos
		long int poblacionTotal;
	public://Métodos
		Norte(string,long int,string,long int,string,long int,long int);//Constructor
		~Norte();//Destructor
		long int mostrarPoblacionTotal(long int,long int,long int,long int);
};

#endif
