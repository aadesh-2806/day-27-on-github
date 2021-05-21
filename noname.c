#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x;
//	clrscr();
	printf("Welcome\nEnter a value=\n");
	scanf("%d" ,&n);

	x=1;
	while(x<=n)
	{
		i=x;										
		while(i>=1)
		{
			printf("%d",i);
			i=i+1;
		}
		printf("\n");
		x=x+1;
	}
	getch();

}
