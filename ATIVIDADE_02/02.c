#include<stdio.h>

float media()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	return((a+b+c)/3);
}

main()
{
	float mediaa=media();
	if (mediaa>=0 && mediaa<3)
	{
	 printf("Reprovado");
    }
	if (mediaa>=3 && mediaa<7)
	{
	 printf("Exame");
    }
    if (mediaa>=7 && mediaa<=10)
	{
	 printf("Aprovado");
    }
}
