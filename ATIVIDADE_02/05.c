#include<stdio.h>

int ordq()
{
	int aux;
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if (d<a)
	{
		aux=a;
		a=d;
		d=c;
		c=b;
		b=aux;	
	}
	if ((d<b)&&(d>a))
	{
		aux=b;
		b=d;
		d=c;
		c=aux;	
	}
	if ((d<c)&&(d>b))
	{
		aux=c;
		c=d;
		d=aux;	
	}
	printf("%d %d %d %d",d,c,b,a);
}

main()
{
	ordq();
}
