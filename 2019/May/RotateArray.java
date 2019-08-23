// Program to rotate array

class RotateArray{
	void leftRotate(int arr[], int d, int n){
		
		int gcd = gcd(d,n);
		System.out.println("gcd is " + gcd);
		int i,j,k,temp;
		
		for(i=0; i<gcd; i++){
			temp = arr[i];
			j = i;
			while(true){
				k = j + d;
				System.out.println("k is " + k );
				if( k >= n)
				    k = k - n;
				
				if (k == i)
				    break;
				    
				arr[j] = arr[k];
				j = k   ; 
				}
			arr[j] = temp;
			
			}
		
		}
		
	int gcd(int n, int d ){
		
		if(d == 0)
		  return n;
		return gcd(d, n%d);   
		
		}
		
	void printarray(int arr[], int n){
		for (int i =0; i<n; i++){
			System.out.print(arr[i] + " ");
			}
		}		
	
	public static void main(String args[]){
		RotateArray rotate = new RotateArray();
		//int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
		int arr [] = {1,2,3,4,5,6,7};
		rotate.leftRotate(arr, 2, 7);
		rotate.printarray(arr,7);
		
		}
	
	}
