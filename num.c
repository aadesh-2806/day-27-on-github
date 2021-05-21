#include<stdio.h>

void main()
{
	
	int i,a[100],b[100],c[50][50],t,n,m,j,k,l;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
		i++;
	}
	printf("no. should be greater than");
	scanf("%d",&k);
	
	i=0;
	while(i<n)
	{
		t=a[i];
		l=0;
		while(i<n)
		{
			if(t==a[i])
			{	
				l++;
			}
			else
			{
				break;
			}
			i++;	
		}
		if(l>=k)
		{
			printf("%d ",t);
		}
		
	}
	getch();
	
}	 
