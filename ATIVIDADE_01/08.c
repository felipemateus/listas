#include<stdio.h>
float area(int a)
{
	float pi=3.141592;
	return (pi*a*a);		
}

main()
{
	float x;
	scanf("%f",&x);
	printf("a area eh: %f \n",area(x));
	
	
}
