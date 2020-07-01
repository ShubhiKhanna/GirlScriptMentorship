
     

#include<iostream>
using namespace std;
unsigned long long reverse( unsigned long long m)
{
     unsigned long long res=0;
      while(m!=0)
    {   int rem=m%10;
        res=(res*10)+rem;
        m/=10;
        
    }
    return res;
}
int main() {
    //code
    int n;
    cin>>n;
    while(n>0)
    {   unsigned long long m;
       cin>>m;
        long rev=reverse(m);
        cout<<rev<<endl;
        n--;
    }

}







	    



