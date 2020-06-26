class Solution {
public:
    int countPrimes(int n) {
        int p[n+1];
        if(n<2)
            return 0;
        for(int i=0;i<n;i++)
            p[i]=0;
        p[2]=1;
        int count=0;
        for(int i=3;i<=n;i+=2)
            p[i]=1;
        for(long long i=3;i<=n;i+=2)
        {
            if(p[i]==1)
            {
                for(long long j= i*i;j<=n;j+=i)
                    p[j]=0;
            }
        }
        for(long long i=0;i<n;i++)
        {
            if(p[i]==1)
                count++;
        }
        return count;
    }
};
