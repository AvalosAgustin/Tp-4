#include <stdio.h>
#include <stdlib.h>
float perimetro(float fu,float su)
{
	float pre=0;
	pre=fu/su;
	return pre;
	
}
int main() 
{
	float fu,su;
	printf("Ingresar la fuerza de la superfice\n");
	scanf("%f",&fu);
	
	printf("Ingresar la superficie\n");
	scanf("%f",&su);
	

	
	printf("La presion de la superficie es:%.2f\n",perimetro(fu,su));
	system ("pause");
	return 0;
}
