//Practica 6
//Ejercicio 5
//Univ. Luis Mauricio Averanga Vergara 

#include<iostream>

using namespace std;

int main(){
cout<<"Siendo a(n+1)=a(n-1)+a(n)";
cout<<"\tsi:\ta(0)=1";
cout<<"\ty\ta(1)=1"<<endl;

int n,a1,a0,suma;
	cout << "\nIngrese la cantidad de terminos de la sucesion: ";
	cin >> n;
    cout << "\nLos "<<n<<" primeros terminos de la sucesion son: \n" << endl;
	a0=1;
	a1=1;
	suma=0;
	cout <<a0<< " , ";
	for(int i=2;i<=n;i++){
       cout <<a1<< " , ";
       a1 = a0 + a1;
       a0 = a1 - a0;
	}
	suma = a1+a0;
	cout << "\n\nLa suma de estos es: "<<suma-1<<endl;
}