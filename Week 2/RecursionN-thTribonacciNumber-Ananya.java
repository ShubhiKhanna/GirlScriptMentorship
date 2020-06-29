class Solution {
    static int tribonacci(int n)
    {
        int arr[]=new int[n+1];
        
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else if(n==2)
            return 1;
        else
        {
            arr[0]=0;
            arr[1]=1;
            arr[2]=1;
            int i;
            for(i=3;i<n+1;i++)
            {
                arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
            }
            return arr[i-1];
        }
    }
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        System.out.println(Solution.tribonacci(x));
    }
}