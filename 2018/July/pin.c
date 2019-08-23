#include<stdio.h>

int pow1(int a, int b)
{
	int i=0,result=1;
	for(i=0;i<b;i++)
	  result *= a;
	
	return result;
	}

int main()

{
	int i,t,n;
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		
		if(n==1)
		{
			printf("1 1\n");
			}
		else	
		printf("%d %d\n", (pow1(10,(n-1)) + 8), pow1(10,n) );
		
		}
	
	return 0;
	}
