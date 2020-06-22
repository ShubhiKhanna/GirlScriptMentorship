#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    t--;
	    long long n,rev=0,d;
	    cin>>n;
	    while(n>0){
	        d=n%10;
	        rev= rev * 10 + d;
	        n=n/10;
	    }
	    cout<<rev<<endl;
	}
	return 0;
}
