#include <bits/stdc++.h>
using namespace std;

int fun (int a,int b, int c){
    if(a == 0)
	        {
	       cout<<"Invalid"<<endl;
	       return 0;
	        }
	       int d = b*b - 4*a*c;
           double sqrt_val = sqrt(abs(d));
	         if( d<0 )
	            {
	           cout<<"Imaginary";
	           return 0;
	            }

	        cout<<floor((double)(-b + sqrt_val)/(2*a))<<" "<<floor((double)(-b - sqrt_val)/(2*a))<<endl;

	       return 0;
}

int main() {
	int t;
	cin>>t;
	while(t!=0)
	{
	    int a,b,c,k;
	    cin>>a>>b>>c;
	    k= fun(a,b,c);
	    t--;
	}
	return 0;
}
