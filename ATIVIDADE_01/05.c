#include<stdio.h>

int soma(int a,int b)
{
	return(a+b);
}

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",soma(x,y));
	return(0);
}
