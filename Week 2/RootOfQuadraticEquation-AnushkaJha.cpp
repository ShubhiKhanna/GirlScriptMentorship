
#include <iostream>
#include<cmath>
using namespace std;

void findRoots(int a,int b, int c){
    
    if(a==0)
        cout<<"Invalid";
    else if(b*b<4*a*c)
        cout<<"Imaginary"<<"\n";
    else{
        float x=sqrt(b*b-4*a*c);
        int root1=floor((-b+x)/(2*a));
        int root2=floor((-b-x)/(2*a));
        cout<<root1<<" "<<root2<<"\n";
    }
        
    
    
}

int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    findRoots(a,b,c);
	}
	return 0;
}
