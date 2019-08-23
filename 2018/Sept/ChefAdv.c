#include<stdio.h>


int main(){
	
	int t,N,M,X,Y,k,p,i;
	
	scanf("%d",&t);
	
	while(t--){
		
		scanf("%d%d%d%d",&N,&M,&X,&Y);
		k=1;
		p=1;
		
		if(k==N && p==M){
			printf("Chefirnemo\n");
			
			}
			
		 else if( (N%(X+1) == 0  || N%X == 0)  && ( M%(Y+1) == 0 || M%Y == 0 ) ){
             
			  printf("Chefirnemo\n");
			  
		      }
		      
		      else if( N%X == 2 &&  M%Y == 2 ){
			     printf("Chefirnemo\n");
			    
			   }
			   
			 else if( N%X == 1 && M%Y == 1 ){
				    printf("Chefirnemo\n");
				 
				 }  
			 else if( X>N && N==2 && ( M%(Y+1) == 1) ){
				   
				  printf("Chefirnemo\n");
				 
				 }  
			   else if (Y>M && M==2  &&( N%(X+1) ==1 ) ){
				   
				   printf("Chefirnemo\n");
				   }
			   
			 else 
			    {
				printf("Pofik\n");
				}
		    
			
			
			
		}
	
	
	return 0;
	}
