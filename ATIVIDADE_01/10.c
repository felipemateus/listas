#include<stdio.h>

 int salario()
{
	int h,n;
	printf("quanto vc ganha por hora e o numero de horas trabalhadas por dia\n");
	scanf("%d %d",&h,&n);
	printf("seu salario %d\n",h*n);
}

main()
{
	salario();
	
}
