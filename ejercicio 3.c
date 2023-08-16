#include <stdio.h>
#include <stdlib.h>
float hombres(int hm, float c, float porhm)
{
	
	porhm=(hm*100)/c;
	
	return porhm;
}


float mujeres(int mj, float c, float pormj)
{
	
	
	pormj=(mj*100)/c;
	return pormj;
	
}

int main() 
{
	int hm,mj;
	float c=0,porhm=0,pormj=0;
	printf("ingrese la  cantidad de hombres que inviaron su curriculum\n");
	scanf("%d",&hm);
	
	printf("ingrese la  cantidad de mujeres que inviaron su curriculum\n");
	scanf("%d",&mj);
	
	c=hm+mj;
	
	

	
	printf("El porcentaje de hombres que enviaron el curriculum son:%.2f\n",hombres(hm,c,porhm));
	printf("El porcentaje de mujeres que enviaron el curriculum son: %.2f\n",mujeres(mj,c,pormj));
	
	
	system ("pause");
	return 0;
}
