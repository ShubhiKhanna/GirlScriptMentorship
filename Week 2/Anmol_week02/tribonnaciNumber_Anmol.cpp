/*

https://leetcode.com/problems/n-th-tribonacci-number/

*/

#include<stdio.h>
class Solution {
public:
    int tribonacci(int n) {
        int array[n+1];
        if (n==0) return 0;
        array[0] = 0;
            array[1] = 1;
        if(n>=2)
        {
            array[2] = 1;
            for(int i=3;i<=n;i++){
              array[i] = array[i-1] + array[i-2] + array[i-3];
             /*
             cout<<array[i]<<" "<<"array i -1 "<<array[i-1]<<" "<<"array i -2 "<<array[i-2]<<" "<<"array i -3 "<<array[i-3];
             cout<<endl<<endl;
             fourth = first + second + third;
              array[i] = fourth;
              first = second;
              second = third;
             third = fourth;
        */
        }

        }
        return array[n];

    }
};
