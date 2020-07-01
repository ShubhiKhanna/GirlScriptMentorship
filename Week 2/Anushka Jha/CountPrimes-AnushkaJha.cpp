class Solution {
public:
    int countPrimes(int n) {
        
        if(n<2)
            return 0;
        
        int count=0;
        bool temp[n+1];
        fill(temp,temp+n+1,true);
        temp[0]=temp[1]=false;
        
        for(int i=2;i<n;i++){
            
            if(temp[i]==true){
                count++;
                if(i<=sqrt(n))
                for(int j=i*i;j<n;j+=i){
                    temp[j]=false;
                    
                }
            }
        }
        
        return count;
    }
};
