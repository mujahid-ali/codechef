#include<stdio.h>
#define MAX 100005

int findk(int k, int arr[], int H, int N)
{
	int temp,Hcount,i;
	Hcount = 0;
	
	while (Hcount < H)
	{
		for(i=0;i<N;i++)
		{
			if(arr[i] <= k)
			{
				Hcount++;
				}
			else
			{
				temp = arr[i] - k;
				while(temp > 0)
				{
					temp = temp - k;
					Hcount++; 
					}
				
				}	
			
			}
		
		}
		if ( (i == N) && (Hcount == H) )
		{
			return k++;
			}
		else
		{
			return findk(++k, arr, H, N);
			}	
	
	}


int main()

{
	int t,N,H,i,k;
	int arr[MAX];
	
	scanf("%d", &t);
	
	while(t--)
	{
		scanf("%d", &N);
		scanf("%d", &H);
		
		for(i =0; i<N; i++)
		{
			scanf("%d",&arr[i]);
			}
		k = arr[0]; 
		k=findk(k, arr, H, N);
			
		printf("%d",k);
		}
	
	return 0; 
	}
