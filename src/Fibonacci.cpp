/*
 Nombres:
 Luis Rodrigo Montoya Rangel
 Claudio Alberto Ibañez Garduño
 Descripcion:
 Programa que calcula el valor de la serie de fibonacci asociado a un numero ingresado por el usuario
 */

#include <iostream>

/*
 Funcion que recibe el numero asociado al numero de la serie de fibonacci que se desea calcular 
 y lo utiliza para calcularlo por recursividad
 @params: int
 @result: NULL
 */
unsigned int fibonacci(int num);

/*
 Funcion principal (main). Pide un número al usuario y calcula el numero de la serie de fibonacci asociado
  por iteraciones y recursividad
 @params: NULL
 @result: int
 */
int main()
{
	unsigned int anterior=0;
	unsigned int actual=1;
	unsigned int num;
	unsigned int suma;
	std::cout<<"Este programa calcula la serie de fibonacci de un numero ingresado por el usuario de modo iterativo y recursivo"<<std::endl;
	std::cout<<"Ingrese el numero de la serie de fibonacci que desee obtener"<<std::endl;
	std::cin>>num;
	std::cout<<"Ahora se calcula la serie de fibonacci de modo iterativo"<<std::endl;
	if(num==0 || num==1)
	{
		std::cout<<"El numero "<<num<<" dela serie de Fibonacci es: "<<num<<std::endl;
	}
	else
	{
		for(int i=1;i<num;i++)
		{
		suma=actual+anterior;
		anterior=actual;
		actual=suma;
		}
		std::cout<<"El numero "<<num<<" de la serie de Fibonacci es: "<<actual<<std::endl;
	}
	
	std::cout<<"Ahora se calcula la serie de fibonacci de modo recursivo"<<std::endl;
	std::cout<<"El numero "<<num<<" dela serie de Fibonacci es: "<<fibonacci(num)<<std::endl;
	return 0;
}

unsigned int fibonacci(int num)
{
	if(num==0 || num==1)
	{
		return num;
	}
	else
	{
		return fibonacci(num-1)+fibonacci(num-2);
	}
}
