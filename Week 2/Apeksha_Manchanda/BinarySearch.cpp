// The API isBadVersion is defined for you.
// bool isBadVersion(mid(int version);

class Solution {
public:
    int firstBadVersion(int n) { 
       long int end=n;
       long int start=0;
     long int mid=0;
        while(start<=end)
        {    mid=(start+end)/2;
           if(isBadVersion(mid)&&!(isBadVersion(mid-1)))
              {
                  break;
               
                 
              }
            if(isBadVersion(mid)&&(isBadVersion(mid-1)))
              {
                end=mid-1;
               
                 
              }
              else if(!isBadVersion(mid)){
                  start=mid+1;
              }
        }
        return mid;
  
        
    }
};