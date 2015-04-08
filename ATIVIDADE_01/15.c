#include<stdio.h>

salario()
{
	float sal,pet;
	scanf("%f %f",&sal,&pet);
	printf("%0.2f\n%",(sal*pet/100));
	printf("%0.2f\n%",(sal*((pet/100)+1)));
}

main()
{
	salario();
}
