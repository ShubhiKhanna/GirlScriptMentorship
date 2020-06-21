
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    void reverse(long n)
    {
        long reverse=0;
        while(n!=0)
        {
            long rem=n%10;
            reverse=reverse*10+rem;
            n=n/10;
        }
        
        System.out.println(reverse);
        
    }
	public static void main (String[] args) {
		//code
		long n;
		int t;
		Scanner sc=new Scanner(System.in);
		GFG g=new GFG();
		t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
		    n=sc.nextLong();
		    g.reverse(n);
		}
	}
}