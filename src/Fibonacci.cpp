#include <iostream>

unsigned int fibonacci(int num);

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
