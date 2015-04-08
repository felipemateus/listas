#include<stdio.h>

salario()
{
	int sal;
	scanf("%d",&sal);
	printf("%0.2f",sal-(sal*0.1)+50);
}

main()
{
	salario();
}
