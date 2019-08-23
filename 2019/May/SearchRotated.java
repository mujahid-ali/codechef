
class SearchRotated{
	
	int search(int arr[], int low, int high, int key){
		
		if(low > high)
			return -1;
			
		int mid = (low + high) /2; //low +(high -low)/2
		
		if( arr[mid] == key)
			return mid;
		if(arr[low] <= arr[mid]){
			
			if(arr[mid] > key && arr[low] <= key)
				return search(arr, low, mid-1, key);
			
				return search(arr, mid+1, high, key);
			
			}
		if (arr[mid] > key)
			return search(arr, low, mid-1, key);
		return search(arr, mid+1, high, key);	
		}
	
	
	public static void main(String args[]){
		
		SearchRotated searchobj = new SearchRotated();
		int arr [] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
		int n = arr.length;
		int key = 1;
		int result = searchobj.search(arr, 0, n-1, key);
		
		if(result == -1)
			System.out.println("Key not found");
		else
			System.out.println("Key is found at index = " + result);
		
		
		}
	}
