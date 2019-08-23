#include<stdio.h>
#define MAX 10000
int main()
{
	int t, n, m,i,flag=0;
	int arr1[MAX], arr2[MAX];
	scanf("%d",&t);
	
	while(t--)
{	
	flag = 0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
		}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
		}
		
		
	i=0;
	while( (arr1[i] <= arr2[i]) && (i<n) )
	{
		i++;
			
		}	
	if(i == n)
	{
		flag = 1;
		}	
	i=n;	
	while(  (arr1[i] <= arr2[n-i-1])  &&  (i > -1) )
	{
		i--;
			
		}
	if( (i == -1)  && (flag == 1)  )
	{
		flag = 2;
		}	
	else if ( (i == -1) && (flag != 1)  )
	
	     {
			 flag = 3;
		    }	
	if (flag == 0)
	printf("none");
	if (flag == 1)
	printf("front");
	else if (flag == 2)
	     {
			 printf("both");
			 } 
			 
		else if(flag == 3)
		     {
				printf("back"); 
				 }	 

}	
	return 0;
	}
