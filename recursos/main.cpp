///////////////////////////////
//Inclusión de librerias
#ifdef _WIN32
#include <Windows.h>
#include <conio.h>
#endif

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include "PAIS1.h"
#include "PAIS2.h"
#include "PAIS3.h"
#include "Norte.h"

#define color SetConsoleTextAttribute
///////////////////////////////

//////////////////////////////////
//indicación de función
using namespace std;
////////////////////////////////////

////////////////////////////////////
//Creación de clases

////////////////////////////////////

////////////////////////////////////
//constructor de la clase
//sirve para inicializar los atributos de la clase

////////////////////////////////////

////////////////////////////////////
//Implementación de la clase
/*los dos puntos significan que el método pertenece a esa clase especificada
no hay necesidad de pasar paramentros a los métodos que pertenecen a la misma clase*/

////////////////////////////////////

////////////////////////////////////
//Creación de estructuras

////////////////////////////////////

/////////////////////////////////////
//prototipado de funciones
void Portada(void);
////////////////////////////////////

/////////////////////////////////////////
//declaración de variables globales

////////////////////////////////////////

//////////////////////////////
//inicio del código principal del programa
int main(){
	/////////////////////////////
	//inicio del programa
	/*cout<<"Este programa "<<endl;
	cout<<"Creado por: Mej¡a Casta¤eda Bryan Emmanuel"<<endl;
	cout<<"Recuerda que s¡ puedes imaginarlo, puedes programarlo."<<endl<<endl;*/
	/////////////////////////////
	
	/////////////////////////////
	//Creación de  objetos de clases
	PAIS1 obj1("México",130262220);
	PAIS2 obj2("Brazil",213993441);
	PAIS3 obj3("Nueva Zelanda",5122600);
	/////////////////////////////
	
	/////////////////////////////
	//Declaración de variables de estructuras
	
	////////////////////////////

	/////////////////////////////
	//Declaración de variables locales
	
	////////////////////////////
	
	////////////////////////////
	//declaración de arreglos(vectores unidimencionales)
	
	///////////////////////////
	
	////////////////////////////////
	//declaración de matriz o tablas(vectores bidimencionales)
	
	///////////////////////////////

	/////////////////////////////// 
	//declaración de cadenas
	
	///////////////////////////////

	//////////////////////////////
	//delcaración de punteros
	
	//////////////////////////////
	
	//////////////////////////////
	//Cuerpo del programa
	Portada();
	//////////////////////////////
	
	//////////////////////////////
	//parte final del código	
	cout<<"Este es la parte final de programa"<<endl;
	cout<<"Que la fuerza de velocidad te acompa¤e"<<endl<<endl;
	#ifdef _WIN32
	system("pause");
	#else
	getch();
	#endif
	return 0;
	//////////////////////////////
}
//fin del código principal del programa
//////////////////////////////

//////////////////////////////////////////
//definición de funciones
void Portada(){
	HANDLE consola=GetStdHandle(STD_OUTPUT_HANDLE);
	char progreso=char(219);
	/*convierte el numero 219 en su equivalente al código ascii, esto se utiliza para mostrar el progreso de la barra*/
	
	char barra[31]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '
					,' ',' ',' ',' ',' ',' ',' ',' ',' ',' '
					,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',0};
	/*En este arreglo, se mostrará el progreso*/
	int tiempoFaltante=30;

	for(int contador=0;contador<30;contador++){
		barra[contador]=progreso;
		/*llena el arreglo con el caracter 219*/
		#ifdef _WIN32
		Sleep(1000);
		system("cls");
		#else
		sleep(1000);
		clrscr();
		#endif
		tiempoFaltante--;
			cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<"                        |--------------------------------------------------------------|"<<endl;
			cout<<"                        |                  INSTITUTO POLITCNICO NACIONAL              |"<<endl;
			cout<<"                        |      Escuela Superior de Ingeier¡a Mec nica y electr¢nica    |"<<endl;
			cout<<"                        |                        Unidad Culhuac n                      |"<<endl;
			cout<<"                        |              Nombre: Mej¡a Casta¤eda Bryan Emmanuel          |"<<endl;
			cout<<"                        |          Materia: Programaci¢n orientada a objetos           |"<<endl;
			cout<<"                        |                            Pr ctica 10                       |"<<endl;
			cout<<"                        |                          Grupo: 2CV32                        |"<<endl;
			cout<<"                        |                   Profesor: Osorino Soto Roberto             |"<<endl;
			cout<<"                        |______________________________________________________________|"<<endl<<endl;
			cout<<"                                   Esta portada se quitar  en 30 segundos"<<endl;
			cout<<"                               Recuerda que s¡ pudes imaginarlo, puedes programarlo"<<endl<<endl;
		
			cout<<setw(40)<<"Faltan "<<tiempoFaltante<<" segundos para que desaparesca la portada"<<endl<<endl;
			color(consola,11);
			cout<<setw(70)<<barra<<endl;
			color(consola,7);
			
			if(tiempoFaltante==0){
				#ifdef _WIN32
				system("cls");
				#else
				clrscr();
				#endif
				
				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<"                        |--------------------------------------------------------------|"<<endl;
				cout<<"                        |                  INSTITUTO POLITCNICO NACIONAL              |"<<endl;
				cout<<"                        |      Escuela Superior de Ingeier¡a Mec nica y electr¢nica    |"<<endl;
				cout<<"                        |                        Unidad Culhuac n                      |"<<endl;
				cout<<"                        |              Nombre: Mej¡a Casta¤eda Bryan Emmanuel          |"<<endl;
				cout<<"                        |          Materia: Programaci¢n orientada a objetos           |"<<endl;
				cout<<"                        |                            Pr ctica 10                       |"<<endl;
				cout<<"                        |                          Grupo: 2CV32                        |"<<endl;
				cout<<"                        |                   Profesor: Osorino Soto Roberto             |"<<endl;
				cout<<"                        |______________________________________________________________|"<<endl<<endl;
				cout<<"                                   Esta portada se quitar  en 30 segundos"<<endl;
				cout<<"                               Recuerda que s¡ pudes imaginarlo, puedes programarlo"<<endl<<endl;
		
				cout<<setw(40)<<"Faltan "<<tiempoFaltante<<" segundos para que desaparesca la portada"<<endl<<endl;
				color(consola,10);
				cout<<setw(70)<<barra<<endl;
				color(consola,7);
				getch();
			}
		
		/*Muestra el progreso*/
	}
	#ifdef _WIN32
	Sleep(1000);
	system("cls");
	#else
	sleep(1000);
	clrscr();
	#endif
}
/////////////////////////////////////////

////////////////////////////////
/*
Si tienes alguna duda sobre la realización sobre cosas busca en 
Programación ATS o en cualquier video de internet, o páginas de documentación sobre 
programación en C++
*/
///////////////////////////////
