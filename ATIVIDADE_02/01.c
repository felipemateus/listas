#include<stdio.h>

float media()
{
   float t,a,e;
   scanf("%f %f %f",&t,&a,&e);
   return((t*2+a*3+e*5)/10);
}

main()
{
	float mediapd;
	mediapd=media();
	if ((mediapd>=8)&& (mediapd<=10))
	 	printf("A");
	 if (mediapd>=7 && mediapd<8)
	 {
	 	printf("B");
	 }
	 if (mediapd>=6 && mediapd<7)
	 {
	 	printf("C");
	 }
	 if (mediapd>=5 && mediapd<6)
	 {
	 	printf("D");
	 }
	 if (mediapd>=0 && mediapd<2)
	 {
	 	printf("E");
	 }
}
