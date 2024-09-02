#include<iostream>
int main(){
	int x,y;
	int aux;
	std::cout<<"Ingrese dos numeros enteros";
	std::cin>>x>>y;
	aux=x;
	x=y;
	y=aux;
	std::cout<<x<<", "<<y<< std::endl;
	return 0;
}
//este es nuestro primer codigo
