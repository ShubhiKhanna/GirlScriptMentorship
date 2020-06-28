/*
https://leetcode.com/problems/count-primes/
*/

#include<math.h>
class Solution {
public:
    int countPrimes(int n) {
        int ar[n+1];
        int count=0;
        if(n==0) return 0;
        ar[0] = ar[1] = 0;
 if(n>=2)
 { for(int i=2; i<n; i++)
           ar[i] = 1;

        for(int i=2; i<=sqrt(n); i++)
        {
            if(ar[i])
            {
                for(int j =2; i*j<=n; j++)
                    ar[i*j] = 0;
            }

        }
        for(int i=0; i<=n; i++)
            if(ar[i]==1)
                ++count;
 }
        return count;

    }

};
