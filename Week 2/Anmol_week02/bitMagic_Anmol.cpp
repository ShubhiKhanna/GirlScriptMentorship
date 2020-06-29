/*

https://leetcode.com/problems/number-of-1-bits

*/
#include<iostream>
using namespace std;
 int hammingWeight(uint32_t n) {
     int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
    }

    int main()
    {
    int n;
    cout<<"enter n\n";
    cin>>n;
   int k = hammingWeight(n);
   cout<<k;
    }
