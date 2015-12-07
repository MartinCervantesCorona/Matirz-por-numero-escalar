#include <stdio.h>
int matriz[3][3],a,b,var,i,j;
int main()
{
	printf("dame el escalar :\n");
	scanf("%d",&a);
	printf("ingresa la matriz");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)	
		{
			printf("Digita el numero en la posicion %d,%d\n",i,j);
			scanf("%d",&b);
			matriz[i][j]=b;
		}
	}
		printf("La matriz inicial es:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)	
		{
			printf("%d,",matriz[i][j]);
		}
		printf("\n");
	}
	printf("esta es la matriz multiplicada por el numero escalar\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			var=matriz[i][j]*a;
			printf("%d,",var);
		}
		printf("\n");

	}	
	printf("\n");
}
