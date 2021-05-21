#include<stdio.h>
#include<conio.h>

int main()
{
	
	int a[200],b[50][50],c[40],d[50],e[50],m,j,p,q,l,x,y,i,t;
	
	printf("welcome\nenter number of values= ");
	scanf("%d",&x);
	
	for(i=0;i<x;i++)
	{
		printf("enter value ");
		scanf("%d",&a[i]);
	}
	i=0;
	y=0;
	while(i<x)
	{
		e[y]=a[i];
		y++;
		i++;
	}
				
				
		i=0;
		l=0;
		t=0;																	
		while(i<x)
		{    		
			for(m=0;a[i]!=0;m++)
			{			
				b[l][m]=a[i]%10;
				a[i]=a[i]/10;
			}
			c[t]=m;
			i++;
			l++;
			t++;
		}
		 
		l=0;
		q=0;
		t=0;
		while(l<x)
		{    					
				m=c[t]-1;
				p=1;
				d[q]=0;
				while(m>=0)
				{
					d[q]=b[l][m]*p+d[q];
					p=p*10;
					m--;
				}
				l++;
				q++;
				t++;			
		}
		
		y=0;
		q=0;
		while(y<x)
		{
			if(d[q]==e[y])
			{
					printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
			y++;
			q++;
		}
						
  getch();
}
