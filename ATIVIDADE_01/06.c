#include <stdio.h>

int media(int a,int b,int c,int d)
{
   return((a+b+c+d)/4);	

}

 main()
 {
 	int x,y,z,w;
 	scanf("%d %d %d %d",&x,&y,&z,&w);
 	printf("a média eh: %d\n",media(x,y,z,w));
 }
