#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,gcount=0,count=0,n;
	int arr[4]={0};
	char str[500001];
	scanf("%d",&t);
	
	while(t--)
	{
	    scanf("%s",&str);
	    for(n = 0; str[n] != '\0'; ++n);
	    count = 0;
	    for(i=0; i<n ; i++ )
	    {
	        if(str[i] == 'c' || str[i] == 'h' || str[i] == 'e' || str[i] == 'f' )
	        {
	            if(str[i+1] != str[i] && (str[i+1] == 'c' || str[i+1] == 'h' || str[i+1] == 'e' || str[i+1] == 'f') )
	            {
					 if( (str[i+2] != str[i] && str[i+2] != str[i+1]) && (str[i+2] == 'c' || str[i+2] == 'h' || str[i+2] == 'e' || str[i+2] == 'f'))
                        {
							if ( (str[i+3] != str[i] && str[i+3] != str[i+1] && str[i+3] != str[i+2] ) && (str[i+3] == 'c' || str[i+3] == 'h' || str[i+3] == 'e' || str[i+3] == 'f' )) 
							{
								count++;
								}
							}	            
						
					}
	      
	           
	        }
	        
	    }
	if(count > 0)
	{
	    printf("lovely %d \n",count);
	}
	else
	{
	    printf("normal \n");
	}
	}
	
	return 0;
}


