#include <stdio.h>

int function(int a, int b, int c, int d, int e, int f, int g)
{
	int result=0;
	if  (g>4) {
        result = a + b + c + d - e - f;
	} else {
	    result = a + b + c + d + e - f;
	}
	return result;
}

int main()
{
	int res = function(1,2,3,4,5,6,7);
	//printf("El resultado de la operacion es %4d .\n",res);
    return 0;
}
