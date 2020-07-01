#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	int flag=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter element to be searched: ";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			flag=1;
			cout<<"Element found at position: "<<i+1<<"\n";
			break;
		}
	}
	if(flag==0)
		cout<<"Element not found\n";
	return 0;
}
