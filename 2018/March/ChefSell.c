#include<stdio.h>

int main(){
	
	int t,N,i ;
	double TLoss,GLoss,Lloss,price,quantity,discount,sp,ip;
	int arr[3];
	
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d", &N);
		GLoss = 0.0;
		TLoss = 0.0;
		while(N--)
		{
			for(i=0;i<3;i++)
			{
				scanf("%d", &arr[i]);
				}
				
			price = (double)arr[0];
			quantity = (double)arr[1];
			discount = (double)arr[2];
			
			ip = (price * discount) / 100.0; 
			ip = ip + price;
			sp = (ip * discount) / 100.0;
			sp = ip -sp;
			Lloss = price -sp;
			TLoss = Lloss * quantity;   	
			GLoss = GLoss + TLoss;
			
			}
		printf("%.7lf\n", GLoss);	
		
		}
	
	
	return 0;
	}
