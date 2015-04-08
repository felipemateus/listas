#include<stdio.h>

float areat(int b,int h)
{

	return((b*h/2));
}

main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%0.2f",areat(a,b));
	return(0);
	
}
