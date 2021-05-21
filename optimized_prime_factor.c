#include<stdio.h>

void main()
{
	
	int i,a[100],r,s,n,j;
	
	printf("hello\nenter value=");
	scanf("%d",&n);
	
	i=2;
	while(i<=n)
	{					
		if(n%i==0)
		{
			n=n/i;
			printf("%d ",i);
			i=1;
		}
		i++;
	}
	
	getch();
	
}	 		
