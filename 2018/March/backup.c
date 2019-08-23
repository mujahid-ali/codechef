int CountRepeating(int arr[], int n)
{
  int i,count=0,index;  
  
   for (i = 0; i < n; i++)
    {
         index = arr[i] % n;
        arr[index] += n;
    }
 
    for (i = 0; i < n; i++)
    {
        if ((arr[i]/n) > 1)
            {        
            //printf("%d\n",i) ;
            count++;
		}
    }
  /*printf("n The repeating elements are");
   
  for(i = 0; i < size; i++)
  {
    if(arr[abs(arr[i])] > 0)
      arr[abs(arr[i])] = -arr[abs(arr[i])];
    else
      {    
      printf(" %d ", abs(arr[i]));
      count++;
      }
      
  }
  * */
  
  //printf("count is%d\n",count);  
      
  return count;         
}     
