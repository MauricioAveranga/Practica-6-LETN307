//Practica 6
//Ejercicio 4
//Univ. Luis Mauricio Averanga Vergara 

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <cstdlib>
#include <cmath>
using namespace std;
COORD coord;

void gotoxy(int x, int y)
{
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


 int main (){
	int MA[100],a,n,suma=0;

	cout <<"Defina el tamano del Arreglo"<<endl;
	cin >>n;
	
	cout <<"Introduzca los valores del arreglo:"<<endl;
	for (int i=1; i<=n;i++){
			gotoxy(5+i*5,3);
			cin>>a;
			MA[i]=a; 
		}
	for (int i=1; i<=n; i++){
		suma+=MA[i];
		}
	
	cout <<"La suma de los valores del arreglo es: "<<suma;
}