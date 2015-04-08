#include<stdio.h>
#include<math.h>
void menu()
{
	printf("1. Somar dois numeros\n2. Subtrair dois numeros\n3. Multiplicar dois numeros\n4. Dividir dois numeros\n5. Raiz quadrada de um numeros\n Digite a opicao desejada\n");
}

void soma()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("A soma :%d",a+b);
}

void subtrai()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("A subtracao :%d",a-b);
}

void multiplica()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("A multiplicacao :%d",a*b);
	
}
void divide()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("A divicao :%f",a/b);
}
void raiz()
{
	int a;
	scanf("%d",&a);
	printf("A raiz :%0.2f",sqrt(a));
}

void main()
{
	int i;
	menu();
	scanf("%d",&i);
	switch(i)
	{
		case 1 : soma();
		case 2 : subtrai();
		case 3 : multiplica();
		case 4 : divide();
		case 5 : raiz();
		default : printf("\ndigite uma valor de 1 a 5 por favor.");
	}

}
