//Practica 6
//Ejercicio 7
//Univ. Luis Mauricio Averanga Vergara 

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void TorresHanoi(int n, int o, int d, int aux){
	if (n>0){
		TorresHanoi(n-1,o,aux,d);
		cout <<"\n Se mueve anillo desde torre "<<o<<" hasta torre "<<d;
		TorresHanoi(n-1,aux,d,o);
	}
}

int main(){
	int n;
	
	cout <<"Favor introducir la cantidad de anillos: ";
	cin >>n;
	
	TorresHanoi(n,1,2,3);
	
	getch(); 
}