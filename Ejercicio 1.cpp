//Practica 6
//Ejercicio 1
//Univ. Luis Mauricio Averanga Vergara 

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

double factorial (int n);
double pot (int n, int x);
float comp (float e, int x);

int main() {
	int x,n,e;
	cout << "Dada una funcion igual a e^x" <<endl;
	cout << "Introducir el valor de x:";
	cin >> x;
	cout << "Introducir el numero de terminos de la sucesion:";
	cin >> n;
	cout <<"El valor por la sucesion es:" <<pot(n,x)<<endl;
	cout <<"El valor real de e^" <<x<< " es:" <<comp(e,x)<<endl;
	system ("pause");
	}

double pot (int n, int x){
	double t,s=0;
	for(int i=0; i<n; i++){
			t=pow(x,i)/factorial (i);
			s+=t;
	}
	return s;
}
	
double factorial(int n){
	double fac=1;
	for(int i=2;i<=n;i++) {
			fac*=i;
	}
	return fac;
}

float comp (float e, int x){
	float t;
	e=2.7182;
	t= pow(e,x);
	return t;
}



