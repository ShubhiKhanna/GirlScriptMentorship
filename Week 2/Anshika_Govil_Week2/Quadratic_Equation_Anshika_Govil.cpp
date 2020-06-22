#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         double a,b,c,x1,x2,d=0;
         cin>>a>>b>>c;
         if(a==0)
            cout<<"Invalid\n";
         else
         {
            d = (b*b) - (4*a*c);
            if(d<0)
                cout<<"Imaginary\n";
            else
            {
                x1 = ((-1*b) + sqrt(d))/(2*a);
                x2 = ((-1*b) - sqrt(d))/(2*a);
                cout<<floor(x1)<<" "<<floor(x2)<<"\n";
            }
         }
     }
    
	return 0;
}
