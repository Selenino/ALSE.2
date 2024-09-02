#include<iostream>
int main(){
	int x,y,aux;
	printf("Ingrese dos numeros enteros: ");
	scanf("%i",&x);
	scanf("%i", &y);
	aux=x;
	x=y;
	y=aux;
	printf("%i, %i\n", x, y);
	return 0;
}
//este es nuestro primer codigo
