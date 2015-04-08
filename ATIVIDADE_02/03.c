#include<stdio.h>
int maior(int a,int b)
{
	if (a>b)
	 printf("%d",a);
	if (b>a)
	 printf("%d",b);
	return(0);  
}

main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	maior(x,y);
}
