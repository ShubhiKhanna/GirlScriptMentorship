#include <iostream>
#include<math.h>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int num;
	    double ans=0;
	    cin>>num;
	    if(num==0||num==1)
	        ans=1;
	    else{
	        for(int i=2;i<=num;i++)
	            ans+=log10(i);
	            
	        ans=floor(ans)+1;
	    }
	    
	    cout<<ans<<"\n";
	    
	}
	return 0;
}
