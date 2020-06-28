/*
https://leetcode.com/problems/first-bad-version/

*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
     long long l = 1, h = n, firstBad = 0;
        while(l<=h){
            long long mid = (l+h)/2;
            if (isBadVersion(mid) == false) // if mid element is not bad version
                 l = mid +1; //the first bad one causes all the following ones to be bad

            else {
                // means if mid element is bad version
                firstBad = mid;
                h = mid - 1;  // see on left
            }
        }
        return firstBad;
    }

};
