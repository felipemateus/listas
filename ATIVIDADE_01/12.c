#include<stdio.h>
float media(int a,int b,int c)
{
	return((a+b+c)/3);
}

int main()
{
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	printf("%f",media(x,y,z));
	return(0);
}
