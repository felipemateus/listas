#include<stdio.h>

void maiord()
{
	int a,b,c;
	int x,y,z;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d %d",&x,&y,&z);
	if ((c>z) || ((c==z) && (b>y)) || ((c==z) && (b==y) && (a>x)) )
	{
		printf("a primeira data é maior cronologicamente");
	}
	else
	{
		printf("a segunda é maior");
	}
	

}

void main()
{
	maiord();
}


