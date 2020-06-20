#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        double digit = 1;
        for(long i=1;i<=n;i++)
            digit+=log10(i);
        cout<<int(digit)<<"\n";
    }
	return 0;
}
