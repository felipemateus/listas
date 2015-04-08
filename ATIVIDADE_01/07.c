#include<stdio.h>
int convert(int a)
{
	return(a*100);
}

main()
{
  int x;
  scanf("%d",&x);
  printf("o numero em centimetros: %d",convert(x));	
}
