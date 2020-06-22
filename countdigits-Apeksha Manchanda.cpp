#include <iostream>
#include<math.h>
using namespace std;
double fact(long no){
    
    if(no==1||no==0)
    {
        return log10(1);
    }
    return (log10(no)+fact(no-1));
}
int main() {
	//code 
	int n;
	long no;
	cin>>n;
	while(n>0)
   {
       cin>>no;
       int m=floor(fact(no))+1;
       cout<<m<<endl;
       n--;
   }
	return 0;
}
