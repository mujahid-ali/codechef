#include<stdio.h>
#define MAX 100005

int main()
{
	int n,i,min1=MAX, min2=MAX, min3=MAX;
	int coins[MAX], worker[MAX];
	
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &coins[i]);
		}
	for(i=0; i<n; i++)
	{
		scanf("%d", &worker[i]);
		}	
		
	for(i=0;i<n;i++)
	{
		if(worker[i] == 1)
		{
			min1 = coins[i];
			}
		else if(worker[i] == 2)
		     {
				 min2 = coins[i];
				 }
		    else if(worker[i] == 3)
		         {
					 min3 = coins[i];
					 }	 	
		}
		for(i =0; i<n; i++)
		{
			if(worker[i]  == 1  && min1 > coins[i])
			{
				min1 = coins[i];
				}
			 else if(worker[i] ==2 && min2 > coins[i])
			 {
				 min2 = coins[i];
				 }	
				 
			 else if(worker[i] == 3 && min3 > coins[i])
			 {
				 min3 = coins[i];
				 }
			 	 
			}
		if( min3 < min1 + min2)	
		printf("%d",min3);
		else
		printf("%d",min1+min2);	
			
	return 0;
	}
