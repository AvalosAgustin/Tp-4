#include <stdio.h>
#include <stdlib.h>

int suma (int r1,int r2,int r3,int r4,int r5)
{
	
	
	int resul=0;
	resul=r1+r2+r3+r4+r5;
	
	
	
	
	return resul;
	
}

int impr (int r1,int r2,int r3,int r4,int r5)
{
	
	printf("\nLa resistencia 1 es:%d\n", r1);
	printf("La resistencia 2 es:%d\n", r2);
	printf("La resistencia 3 es:%d\n", r3);
	printf("La resistencia 4 es:%d\n", r4);
	printf("La resistencia 5 es:%d\n\n", r5);
}


int main() 
{
	int r1,r2,r3,r4,r5;
	
	printf("Ingresar Resistencia 1\n");
	scanf("%d",&r1);
	
	printf("Ingresar Resistencia 2\n");
	scanf("%d",&r2);
	
	printf("Ingresar Resistencia 3\n");
	scanf("%d",&r3);
	
	printf("Ingresar Resistencia 4\n");
	scanf("%d",&r4);
	
	printf("Ingresar Resistencia 5\n");
	scanf("%d",&r5);
	
	
	impr(r1,r2,r3,r4,r5);
	
	printf("La resistencia total es:%d\n",suma(r1,r2,r3,r4,r5));
	
	
	
	system ("pause");
	return 0;
}
