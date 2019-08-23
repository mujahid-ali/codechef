#include <stdio.h>
#define MAX 100005
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
 
 
int main()
{
  int t,n,a,b,i,result=0,counta,countb;
  int arr[MAX];
  float proba,probb,probw;
  scanf("%d", &t);
  
  while(t--)
  {
	  scanf("%d%d%d", &n,&a,&b);
	  result = 0;
	  counta=countb=0;
	  for(i=0;i<n;i++)
	  {
		  scanf("%d",&arr[i]);
		  if(arr[i] == a )
		  {
			  counta++;
			  }
		   if(arr[i] == b)
		   {
			   countb++;
			   }	  
		  
		  }
		proba=(float)counta/n;
		probb=(float)countb/n;
		
		probw= proba * probb; 
		printf("%0.10f\n",probw);  
	}
	
  return 0;
}	
		
