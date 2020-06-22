/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG 
{
    static int Digits(int n)
    {
        double fac=0.0;
        for(int i=2;i<=n;i++)
        {
            fac+=Math.log10(i);
        }
        return (int)(Math.floor(fac))+1;
    }
	public static void main (String[] args) 
	{
		//code
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
		    int n=sc.nextInt();
		    System.out.println(Digits(n));
		}
	}
}