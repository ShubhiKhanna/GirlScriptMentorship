
#include <bits/stdc++.h>
using namespace std;


 
void quadraticRoots(int a,int b, int c)
{double x2=0,x1=0;
  double discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        
        cout <<floor(x1)<<" "<<floor(x2);
    }
    
    else if (discriminant == 0) {
        
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << floor(x1) <<" "<<floor(x1);
    }

    else {
        cout<<"Imaginary";
    }
   
}





int main() {
	int T; 
	cin>>T; 
	
	while(T--)
	{ 
	    int a, b, c; 
	    cin>>a>>b>>c; 
	    if(a==0&&b==0&&c==0)
	    {cout<<"Invalid";}
	    else{
	    quadraticRoots(a,b,c);
	    cout<<endl;
	    
	}}
	return 0;
}  