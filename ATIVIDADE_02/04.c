#include<stdio.h>

int ordena(int a,int b, int c)
{
	int aux;
	if (a>b || a>c)
	 {
	 	if (b<c)
	 	 {
	 	 	aux=a;
	 	 	a=b;
	 	 	b=aux;
		  }
		else
		 {
		 	aux=a;
		 	a=c;
		 	c=aux;
		  } 
	 }
	if (b>c)
	  {
	  	aux=b;
	  	b=c;
	  	c=aux;
	   } 
	 printf("%d %d %d",a,b,c);
	
}

main()
{
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	ordena(x,y,z);
}

