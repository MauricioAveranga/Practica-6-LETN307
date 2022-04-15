//Practica 6
//Ejercicio 3
//Univ. Luis Mauricio Averanga Vergara
 
#include <iostream>
#include <math.h>

using namespace std;
double factori(int n, int r);
double factorial (int n);

int main(){
int opc,n,r;
double p;

cout <<"\tPERMUTACIONES"<<endl;
cout <<"MENU"<<endl;
cout <<"1. Permutaciones sin repeticion"<<endl;
cout <<"2. Permutaciones con repeticion"<<endl;
cout <<"Cual operacion desea realizar: ";
cin >>opc;

switch (opc){
	case 1: {
		cout <<"Cuantos numeros desea permutar: ";
		cin >>n;
		cout <<"En cuantos grupos: ";
		cin >>r;
		p=factorial(n)/factori(n,r);
		cout <<"El resultado de: "<<n<<"P"<<r<<": "<<p;
		break;
		}
	case 2: {
		cout <<"Cuantos numeros desea permutar: ";
		cin >>n;
		cout <<"En cuantos grupos: ";
		cin >>r;
		p=pow(n,r);
		cout <<"El resultado de: "<<n<<"P"<<r<<": "<<p;
		break;
		}
	}
}

double factorial(int n){
	double fac=1;
	for(int i=2;i<=n;i++) {
			fac*=i;
	}
	return fac;
}
double factori(int n,int r){
	double fac2=1;
	for(int i=2;i<=(n-r);i++) {
			fac2*=i;
	}
	return fac2;
}