#include<stdio.h>

mediapon()
{
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	printf("%d",(a*b+c*d+e*f)/(b+d+f));
}

main()
{
	mediapon();
}
