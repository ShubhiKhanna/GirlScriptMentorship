#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        long long rem;
        long long reverse=0;
        cin>>n;
        while(n!=0)
        {
             rem=n%10;      
            reverse=reverse*10+rem;    
            n/=10;
        }
        cout<<reverse<<"\n";
    }
	return 0;
}
