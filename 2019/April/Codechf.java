/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scan = new Scanner(System.in);
		int N = 0,t=0,i=0;
		char x = 'a';
		
		String string = new String();
		
		if(scan.hasNextInt()){ 
		t = scan.nextInt();
		}
		
		while(t-- >0)
		{
		if(scan.hasNextInt()){ 
		N = scan.nextInt();
		}
		
		if(scan.hasNext()){
		x = scan.next().charAt(0);
	    }
		
		
		//if(scan.hasNext()){
		//for(i=0;i<N;i++){   
		//string = scan.nextLine();
	     //}
		//}
		
		System.out.println(t);
		System.out.println(N);
		//System.out.println(string);
		System.out.println(x);
	}
	
		

	}
}
