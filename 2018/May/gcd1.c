#include<stdio.h>
#define MAX 50005

int gcd (int a, int b)
{
	if(a==0)
	  return b;
	return gcd(b%a,a);  
	}

int hcf(int arr[], int n)
{
	int result,i;
	result = arr[0];
	for(i=1; i<n;i++)
	{
		result = gcd(arr[i],result);
		}
	return result;
	}

int main()
{
	int t,n,i,gcd, arr[MAX];
	
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d", &n);
		for(i=0; i<n; i++)
		{
			scanf("%d", &arr[i]);
			}
			
		gcd = hcf(arr,n);	
		
		if(gcd == 1)
		{
			printf("0\n");
			}
		else
		{
		    printf("-1\n");	
			}	
		
		}
	}
