#include <iostream>

using namespace std;
// metodos y funciones = ejecutan una porcion de codigo N cantidad de veces segun se mande a llamar
// metodo = no retorna un tipo de dato
// funcion = retorna un tipo de dato determinado

// 80 lineas de codigo en 10 lugares distintos = 800 lineas de codigo de las cuales 80 son iguales
// crean una funcion o un metodo = y lo manda a llamara 10 veces = 80 lineas de codigo y 10 llamados a funciones.

//funcion que sume dos valores
/*int suma2(int num1,int num2){
	
	int resultado = 0;
	resultado = num1+num2;
	return resultado;
}
int suma3(int num1,int num2,int num3){
	
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}*/

//metodo y envio de parametros por valor referenciaa
/*void suma(int num1,int num2){
	
	int resultado = 0;
	num1+=1; // 11
	num2+=1; // 21
	resultado = num1+num2; // 32
	cout<<resultado<<endl;
	
}*/
int suma(int num1,int num2,int num3);
void suma(int &num1,int &num2);
main() {
	
	/*cout<<suma2(10,20)<<endl;
	cout<<suma3(10,20,40)<<endl;*/
	
	int a=10,b = 20;
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	
	system("pause");
}
int suma(int num1,int num2,int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}
void suma(int &num1,int &num2){
	
	int resultado = 0;
	num1+=1; // 11
	num2+=1; // 21
	resultado = num1+num2; // 32
	cout<<resultado<<endl;
	
}
