/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
      InputStreamReader r = new InputStreamReader(System.in);
      BufferedReader br = new BufferedReader(r);
      int t=0,N=0;
      
      t = Integer.parseInt(br.readLine());
      
      while(t-- >0)
      {
		  
		N = Integer.parseInt(br.readLine());
		//String[] strings = "";
      
		String[] strings=br.readLine().split(" ");
      
		//System.out.println(t);
		//System.out.println(N);
		//System.out.println(strings[0]);
		String str = strings[0];
		//System.out.println("Here is another one "+ strings[1]);
		
		
		int n2 = (N*(N+1))/2 ; 
		String[] sub = new String[n2]; 
		int index = 0,count=0;
		for(int i=0; i<N; i++)
		{
			int j;
		for(j= 0; j<1; j++)
		{
			if(str.charAt(i+j) != strings[1].charAt(j))
			break;
			//System.out.println("i is = "+ i );
			//System.out.println("j is = "+ j);
			//System.out.println(str.substring(i, j));
			//sub[index++] = str.substring(i,j); 
			j++;
			if(j == 1)
			count++;
			
			}
		}	
		//System.out.println(Arrays.toString(sub));	
		
		//for(int i =0; i<n2; i++)
		//{
			//if(sub[i].contains(strings[1]) )
			//count++;
			
			//}
		
		System.out.println(count);
      }			

	}
}

