#include<stdio.h>

salario()
{
	int base;
	scanf("%d",&base);
	printf("%0.2f",(base*1.05)-(base*1.05*0.07));
	
}

main()
{
	salario();
}
