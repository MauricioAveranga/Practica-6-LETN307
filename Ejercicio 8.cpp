//Practica 6
//Ejercicio 8
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
	int MA[100],a,n,par=0,ipar=0,mul;

	cout <<"Dada un numero de n digitos"<<endl;
	cout <<"Introduzca el numero de digitos: ";
	cin >>n;
	
	cout <<"Introduzca el numero deseado:"<<endl;
	for (int i=1; i<=n;i++){
			gotoxy(5+i*2,3);
			cin>>a;
			MA[i]=a; 
		}
	for (int i=1; i<=(n/2); i++){
		par+=MA[2*i];
		}
	for (int i=1; i<=n; i++){
		ipar+=MA[2*i-1];
		}
	
	mul=ipar-par;
	cout <<"La resta de las posiciones impares con los pares es: "<<mul<<" entonces"<<endl;
	if (mul%11==0){
	cout <<"El numero dado es multiplo de 11";
	}
	else {
		cout <<"El numero dado no es multiplo de 11";
	}
}