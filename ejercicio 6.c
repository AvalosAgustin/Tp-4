#include <stdio.h>
#include <stdlib.h>

float la_octava_parte_del_numero(float num)
	
{
	float resul=0;
	resul=num/8;
	return resul;
	
}
int main() 
{
	float num;
	
	printf("Ingresar un Numero\n");
	scanf("%f",&num);
	

	
	printf("La octava parte de un numero es:%.2f\n",la_octava_parte_del_numero(num));
	
	system ("pause");
	
	return 0;
}
