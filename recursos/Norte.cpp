#include "Norte.h"
#include "PAIS1.h"
#include "PAIS2.h"
#include "PAIS3.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

/*Constructor*/
Norte::Norte(string _nombre,long int _poblacion,string _nombre2,long int _poblacion2,string _nombre3,long int _poblacion3,long int _poblacionTotal):PAIS1(_nombre,_poblacion),PAIS2(_nombre2,_poblacion2),PAIS3(_nombre3,_poblacion3){
		poblacionTotal=_poblacionTotal;
	}

/*Destructor*/
Norte::~Norte(){
	
}

long int Norte::mostrarPoblacionTotal(long int _poblacion,long int _poblacion2,long int _poblacion3,long int poblacionTotal){
	mostrarPoblacion();
	mostarPoblacion2();
	mostrarPoblacion3();
	poblacionTotal=_poblacion+_poblacion2+_poblacion3;
	return poblacionTotal;
}
