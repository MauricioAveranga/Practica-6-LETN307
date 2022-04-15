//Practica 6
//Ejercicio 6
//Univ. Luis Mauricio Averanga Vergara 

#include <iostream>
using namespace std;
int main(){
	
int n1,n2,d;

cout <<"\tMAXIMO COMUN DIVISOR"<<endl;
cout <<"Introduzca el primer numero: ";
cin >>n1;
cout <<"Introduzca el segundo numero: ";
cin >>n2;

if (n1<n2){
	for (int i=1;i<=n2;i++){
		if (n1%i==0){
			if (n2%i==0){
			d=i;	
			}
		}
	}
}
else {
	for (int i=1;i<=n1;i++){
		if (n1%i==0){
			if (n2%i==0){
			d=i;	
			}
		}
	}
}
cout <<"El maximo comun divisor de "<<n1<<" y "<<n2<<" es: "<<d;
}