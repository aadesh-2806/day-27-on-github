#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,n,l,x,y,a[50],b[50],c[50];

	printf("Welcome\nEnter no,of values=\n");
	scanf("%d" ,&n);

	printf("Enter no,of values=\n");
	scanf("%d" ,&m);

	i=0;
	while(i<n)
	{
	      printf("SORTED value %d=", i+1);
	      scanf("%d", &a[i]);
	      i=i+1;
	}
	printf("\n");

	l=0;
	while(l<m)
	{
		printf("sorted value %d=", l+1);
		scanf("%d", &b[l]);
		l=l+1;

	}
	printf("\n");
	i=0;
	l=0;
	x=0;
	while(i<n && l<m)
	{
		if(a[i]<b[l])
		{
		     c[x]=a[i];
		     printf("%d  ",c[x]);
		     i=i+1;
		}
		else
		{
			c[x]=b[l];
			printf("%d  ",c[x]);
			l=l+1;
		}
		x=x+1;
	}
	while(i<n)
	{
		c[x]=a[i++];
		printf("%d  ",c[x]);
		x=x+1;
	}
	while(l<m)
	{
		c[x]=b[l];
		printf("%d  ",c[x]);
		l=l+1;
		x=x+1;
	}
	getch();
}
