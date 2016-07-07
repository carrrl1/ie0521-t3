#include <stdio.h>

int function(int a, int b, int c, int d, int e, int f, int g)
{
	int result=0;
	result=a+b+c+d-e-f;
	if(g>4){
		printf("El numero es mayor a 4.\n");
	}
	else{
		printf("El numero NO es mayor a 4.\n");
	}
	printf("El resultado de la operacion es %4d .\n",result);
	return result;
}

int main()
{
	function(1,2,3,4,5,6,7);
	 return 0;
}
