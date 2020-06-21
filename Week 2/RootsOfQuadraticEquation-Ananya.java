/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;
class Roots
{
    void findRoots(int a,int b,int c)
    {
        double quad;
        double ans1=0,ans2=0;
        quad=b*b-(4*a*c);
        if(a==0)
        System.out.printf("Invalid");
        else if(quad<0)
        System.out.printf("Imaginary");
        else
        {
            ans1=Math.floor((-b+Math.sqrt(quad))/(2*a));
            ans2=Math.floor((-b-Math.sqrt(quad))/(2*a));
            if(ans1>=ans2)
            {
                System.out.printf("%d %d",(int)ans1,(int)ans2);
            }
            else
            {
                System.out.printf("%d %d",(int)ans2,(int)ans1);
            }
        }
    }
}
class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc=new Scanner(System.in);
		Roots r=new Roots();
		int t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
		    int a=sc.nextInt();
		    int b=sc.nextInt();
		    int c=sc.nextInt();
		    r.findRoots(a,b,c);
		    System.out.printf("\n");
		}
	}
}