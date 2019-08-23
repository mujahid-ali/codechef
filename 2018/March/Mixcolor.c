#include <stdio.h>
#include <stdlib.h>
#define MAX 100005
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
 
 
int main()
{
  int t,n,i,result=0;
  int arr[MAX];
  
  scanf("%d", &t);
  
  while(t--)
  {
	  scanf("%d", &n);
	  result = 0;
	  for(i=0;i<n;i++)
	  {
		  scanf("%d",&arr[i]);
		  }
		
		 
	  qsort (arr, n, sizeof(int), cmpfunc);	   
	  for(i=0;i<n-1;i++)
	  {
		  if(arr[i] == arr[i+1])
		  {
			  result++;
			  }
		  } 	  
	  //result = CountRepeating(arr, n);
	  
	  printf("%d\n",result);	  
		    
	  }
  getchar();
  return 0;
}
