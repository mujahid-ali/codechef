
class Rotatebyblock{
	//void printarray(int arr[], int n);
	//void swap(int arr[], int si, int fi, int d);
	
	void leftRotate(int arr[], int d, int n){
		
		if( d == 0 || d == n)
			return;
		if (n-d == d){
		    swap(arr, 0, n-d, d);
		    return;
		}
		if(d < n-d){ 
			swap(arr, 0, n-d, d);
			leftRotate(arr, d, n-d);
			
			}
		else{ 
			swap(arr, 0, d, n-d);
			leftRotate(arr[0][n-d], 2*d-n, d); 
			}	     	
		
		}
		
	void swap(int arr[], int si, int fi , int d){
		int i, temp;
		
		for (i=0; i<d ; i++){
			temp = arr[si+i];
			arr[si + i] = arr[fi + i];
			arr[fi + i] = temp;
			}
		
		}	
		
	void printarray(int arr[], int n){
		int i;
		for(i=0; i<n; i++)
			System.out.println(arr[i]);
		
		}	
	
	
	public static void main(String args[]){
		
		Rotatebyblock rotate = new Rotatebyblock();
		int arr [] = {1,2,3,4,5,6,7};
		rotate.leftRotate(arr, 7, 2);
		rotate.printarray(arr,7); 
		
		
		}
	
	}
