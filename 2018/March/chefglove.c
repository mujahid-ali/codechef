#include<stdio.h>
int main()
{
	int t, n, m,i,j,flag=0;
	int *arr1,*arr2;
	//int arr1[MAX], arr2[MAX];
	scanf("%d",&t);
	
	while(t--)
{	
	scanf("%d", &n);
	
	arr1 = (int *)malloc(sizeof(int)*n);
	arr2 = (int *)malloc(sizeof(int)*n); 
	
	//i= 0;
	//while (scanf("%d", &arr1[i++]) == 1);
	
	//i=0;
	//while (scanf("%d", &arr2[i++]) == 1);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
		}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
		}
		
		
	i=0;	
	while( (arr1[i] <= arr2[i]) || (i<n-1) )
	{
		i++;
			
		}	
	printf("value of i is %d \n",i);	
	if(i == n)
	{
		flag = 1;
		}	
	i=n;	
	while(  (arr1[i] <= arr2[n-i-1])  ||  (i > -1) )
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
	printf("none\n");
	if (flag == 1)
	printf("front\n");
	else if (flag == 2)
	     {
			 printf("both\n");
			 } 
			 
		else if(flag == 3)
		     {
				printf("back\n"); 
				 }	 

}	
	return 0;
	}
