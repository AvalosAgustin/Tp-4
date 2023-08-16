#include <stdio.h>
#include <stdlib.h>


int perimetro(int al, int ba)
{
	int per=0;
	per=2*al+2*ba;
	
	return per;

	
	
	
}

int area(int al, int ba)
{
	
	int ar=0;
	ar=al*ba;
	
	return ar;
	
	
	
	
}


int main() 
{
	int al,ba;
	printf("ingrese la altura \n");
	scanf("%d",&al);
	
	printf("ingrese la base\n");
	scanf("%d",&ba);

	printf("El perimetro es :%d\n",perimetro(al,ba));
	printf("El area es:%d\n",area (al,ba));
	
	system ("pause");
	return 0;
}


