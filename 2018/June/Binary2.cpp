#include<stdio.h>

int main()
{
	int t,counta,countb;
	unsigned long int a,b;
	
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%lu %lu",&a,&b);
		counta=countb=0;
		counta=__builtin_popcount(a);
		countb=__builtin_popcount((b-1));
		
		if( a ==  b)
		{
			printf("0\n");
			printf("%lu%lu\n",a,b);
			}
		
		else if( b == 1 || b == 0 )
		{	
		     printf("-1\n");
		     printf("%lu%lu\n",a,b);
			}
		else if(countb >= counta)
		{
		printf("%d\n",(countb - counta + 1));
		printf("%lu%lu\n",a,b);
		printf("counta b %d%d\n",counta,countb);
	     }
	    else if(countb < counta)
	    {
			printf("2\n");
			printf("%lu%lu\n",a,b);
			printf("count a b %d%d\n",counta,countb);
		}	
		 
	    
		
	}
	
	}
