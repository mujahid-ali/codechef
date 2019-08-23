#include<stdio.h>
#define bool int
 
/* Function to check if x is power of 2*/
bool isPowerOfTwo (int x)
{
  /* First x in the below expression is for the case when x is 0 */
  return x && (!(x&(x-1)));
}
 
 void print()
 {
	 printf("No in a function\n");
	 }
 
/*Driver program to test above function*/
int main()
{
  isPowerOfTwo(12)? printf("Yes\n"): print();
  isPowerOfTwo(4)? printf("Yes\n"): printf("No\n");
  return 0;
}
