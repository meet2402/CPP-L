#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("Enter a and b: ");
	scanf("%d%d",&a,&b);

	c = a; // 10
	a = b; // 20
	b = c; // 10

	printf("Value of a: %d\nValue of b: %d",a,b);

	getch();
}