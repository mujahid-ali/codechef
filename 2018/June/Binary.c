#include<stdio.h>

int main()
{
	int t,counta,countb;
	unsigned long long int a,b;
	
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%llu %llu",&a,&b);
		counta=countb=0;
		counta=__builtin_popcountll(a);
		countb=__builtin_popcountll((b-1));
		
		if( a ==  b)
		{
			printf("0\n");
			}
			
		else if(a==0 && b == 1)
		{
			printf("1\n");
			}
		else if( b == 1 || b == 0 )
		{	
		     printf("-1\n");
			}
		else if(countb > counta)
		{
		printf("%d\n",(countb - counta + 1));
	     }
	    else if(countb < counta)
	    {
			printf("2\n");
		}	
		else if (counta == countb)
		{
			printf("1\n");
			}
		
	    
		
	}
	
	}
