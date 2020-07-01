#include <bits/stdc++.h>
using namespace std;

/* LOGIC USED
We know,
log(a*b) = log(a) + log(b)

Therefore
log( n! ) = log(1*2*3....... * n)
          = log(1) + log(2) + ........ +log(n)

Now, observe that the floor value of log base
10 increased by 1, of any number, gives the
number of digits present in that number.

Hence, output would be : floor(log(n!)) + 1.
*/

int main() {
	int t;
	cin>>t;
	while(t!=0)
	{ t--;
	double n,digit=0;
	cin>>n;
	for(double i=1.0; i<=n; i++)
	    {
	        digit += log10(i);
	    }
	    digit= floor(digit)+1;
	cout<<int(digit)<<endl;
	}
	return 0;
}
