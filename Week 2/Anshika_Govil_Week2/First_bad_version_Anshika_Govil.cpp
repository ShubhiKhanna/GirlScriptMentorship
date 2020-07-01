// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int mid = 1;
        while(mid<n)
            if(isBadVersion(mid+(n-mid)/2))
                n = mid+(n-mid)/2;
            else
                mid = (mid+(n-mid)/2)+1;
        return mid;
    }
};
