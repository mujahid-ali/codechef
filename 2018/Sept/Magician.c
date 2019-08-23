#include<stdio.h>
#define MAX 100005

void swap(int arr[], int a, int b)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
	}

int main ()
{
	int t,i,N,S,X,arr1[MAX],j;
	int a,b;
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d%d%d",&N,&X,&S);
		
		int *arr2d = (int *)malloc(S*2*sizeof(int));
		for(i=0 ;i<N; i++)
		{
		  arr1[i] = 0;
	     }
	     
	     arr1[X-1]=1;
	     
	     for(i=0; i<S; i++)
	     {
			 scanf("%d%d",&a,&b);
			 
			 swap(arr1,a-1,b-1);
			 
			 //for(j=0; j<2; j++)
			 //{
				// scanf("%d",&(*(arr2d + i*S +j)));
				 
				 //printf("%d", *(arr2d + i*S +j));
				 //}
			 
			 }
			 
			 for(i=0; i<N; i++)
			 {
				 if (arr1[i] == 1)
				 break;
				 //printf("%d\n",arr1[i]);
				 }
	  
	    printf("%d",i+1);
		
		}
	
	
	return 0;
	}
