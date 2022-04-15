//Practica 6
//Ejercicio 10
//Univ. Luis Mauricio Averanga Vergara

#include <stdio.h>
#include <iostream>
using namespace std;

int ackermann(int,int);

int main(){
 int m,n;
 cout <<"Primer argumento para la funcion Ackermann (m): ";
 cin >>m;
 cout <<"Segundo argumento para la funcion Ackermann (n): ";
 cin >>n;
 printf("Ackermann (%d,%d) = %d\n", m,n,ackermann(m,n));
 return 0;
}

int ackermann(int m, int n){
     if(m==0){
      return n+1;
     }else if(n==0){
      return ackermann(m-1,1);
     }else{
      return ackermann(m-1,ackermann(m,n-1));
     } 
}