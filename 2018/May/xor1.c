#include<stdio.h>
#define MAX 10737418

int main()
{
	unsigned long  int n,i,j,k,arrA[MAX],arrB[MAX];
	int t,result = 0;
	
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%lu", &n);
		for(i=0; i<n; i++)
		{
			scanf("%lu", &arrA[i]);
			}
			
	k=0;
	for(i=0;i<n; i++)
	{
		for(j=0;j<n;j++)
		{
			arrB[k++] = arrA[i] + arrA[j]; 
			}
		}		
	for(i=0;i<(2*n);i++)
	{
		result = result ^ arrB[i];
		}
	printf("%d\n", result);
	
    }
    return 0;
			
}			
