class Solution {
public:
    int tribonacci(int n) {
        
      vector<int>ans(38,0);
        for(int i=0;i<38;i++)
        {
            if(i==0)
            {  ans[i]=0;
               continue;
            }
            if(i==1||i==2)
            {
                ans[i]=1;
               continue;
                
            }
        ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
            
        }
        return ans[n];
    }
};