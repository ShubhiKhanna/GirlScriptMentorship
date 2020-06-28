class Solution 
{
    public int countPrimes(int n) 
    {
        int arr[]=new int[n+1];
        int count=0;
        for(int i=0;i<n+1;i++)
            arr[i]=1;
        for(int i=2;i<n;i++)
        {
            if(arr[i]==1)
            {
                for(int j=1;i*j<n+1;j++)
                    arr[i*j]=0;
                count++;
            }
        }
        return count;
    }
}