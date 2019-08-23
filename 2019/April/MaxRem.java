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
		int N = 0;
		if(scan.hasNextInt()){ 
		N = scan.nextInt();}
		
		int [] Array = new int[N];
		for(int i=0;i<N;i++)
		{
		    if(scan.hasNextInt()){ 
			Array[i] = scan.nextInt();
		    }
		}
		int max,smax;
		max=smax=0; //max=Array[0] is giving error
		
		for(int i=1; i<N; i++)
		{
			if(Array[i]>max)
			{
				smax=max;
				max=Array[i];
				}
			}
		System.out.println(smax);

	}
}
