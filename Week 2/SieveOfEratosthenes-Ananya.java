/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    static void CountPrimes(int n)
    {
        int arr[]=new int[n+1];
        int j;
        for(int i=0;i<n+1;i++)
            arr[i]=1;
        for(int i=2;i<n+1;i++)
        {
            j=1;
            if(arr[i]==1)
            {
                System.out.print(i*j+" ");
                while(i*j<=n)
                {
                    arr[i*j]=0;
                    j++;
                }
            }
        }
        System.out.println();
    }
	public static void main (String[] args) 
	{
		//code
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		for(int j=0;j<t;j++)
		{
		    int x=sc.nextInt();
		    CountPrimes(x);
		}
	}
}