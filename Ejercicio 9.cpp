//Practica 6
//Ejercicio 9
//Univ. Luis Mauricio Averanga Vergara 

#include <iostream>

using namespace std;

int main(){
	int n,b,a[100],f;
	cout <<"\tBomba de reaccion en cadena"<<endl;
	cout <<"Ingrese el numero que explota"<<endl;
	cin >>n;
	cout <<"Ingrese b de la bomba"<<endl;
	cin >>b;
	cout <<"Los fragmentos son: "<<endl;
	if (n==b){
		cout <<n;
	}
	else {
		for (int i=0;i<100;i++){
			a[i]=0;
		}
		
		for (int i=0;i<n;i++){
		n=n-a[i-1];
		a[i]=n/b;
		cout<<a[i]<<"  ";
		}
		cout <<b;
	}
}