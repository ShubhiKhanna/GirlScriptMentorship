#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	int flag=0;
	cin>>n;
	int lo=0,hi=n-1;
	int mid= (lo+hi)/2;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter element to be searched: ";
	cin>>x;
	while(lo<=hi)
	{
		if(arr[mid]==x)
		{
			cout<<"Element found at position "<<mid+1<<"\n";
			flag=1;
			break;
		}
		if(arr[mid]>x)
		{
			hi = mid-1;
			mid = (lo+hi)/2;
			//cout<<lo<<" "<<hi<<"\n";
		}
		if(arr[mid]<x)
		{
			lo = mid+1;
			mid = (lo+hi)/2;
			//cout<<lo<<" "<<hi<<"\n";
		}
	}
	if(flag==0)
		cout<<"Element not found\n";
	return 0;
}
