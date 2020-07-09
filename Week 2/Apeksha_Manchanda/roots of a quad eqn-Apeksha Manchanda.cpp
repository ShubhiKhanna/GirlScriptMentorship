


#include <iostream>
#include<math.h>
using namespace std;


void root(int a, int b,int c){
    double dis=(b*b)-(4*a*c);
    if(dis<0) 
    { 
        cout<<"Imaginary"<<endl;
      return;
    }
    else {
        double x=(-b+sqrt(dis))/(2*a);
        double y=(-b-sqrt(dis))/(2*a);
        int root1=floor(x);
        int root2=floor(y);
        if(root1>=root2)  
        { cout<<root1<<" "<<root2<<endl;
          return;
        }
        else
        {  cout<<root2<<" "<<root1<<endl;
          return;
        }
    }
    
    
}
int main() {
	//code
	int n;
	 int a,b,c;
	cin>>n;
	while(n-->0)
	{
	    cin>>a>>b>>c;
	    if(a==0) 
	    {  cout<<"Invalid"<<endl;
	        
	    }
        else{
            root(a,b,c); 
         }
            
	}
	return 0;
}








