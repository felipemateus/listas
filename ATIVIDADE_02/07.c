#include<stdio.h>

 crescente(int a,int b,int c)
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

int decrescente(int a,int b, int c)
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
	 printf("%d %d %d",c,b,a);
	
}

 meio(int a, int b,int c)
{
	int aux;
	if ((a>b)&&(a>c))
	 {
	 	aux=b;
	 	b=a;
	 	a=aux;
	 }
	if ((c>b)&&(c>a))
	 {
	 	aux=b;
	 	b=c;
	 	c=aux;
	 }
	 printf("%d %d %d",c,b,a);
	
	
}

main()
{
	int i,a,b,c;
	scanf("%d %d %d %d",&i,&a,&b,&c);
	if (i==1)
	{
		crescente(a,b,c);
	}
	if (i==2)
	{
		decrescente(a,b,c);
	}
	if (i==3)
	{
		meio(a,b,c);
	}
}

