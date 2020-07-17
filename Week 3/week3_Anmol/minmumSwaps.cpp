// CPP program to find the minimum number
// of swaps required to sort an array
// of distinct element

#include<bits/stdc++.h>
using namespace std;

// Function to find minimum swaps to
// sort an array
int findMinSwap(int arr[] , int n)
{
	// Declare a vector of pair
	vector<pair<int,int>> vec(n);

	for(int i=0;i<n;i++)
	{
		vec[i].first=arr[i];
		vec[i].second=i;
	}

	// Sort the vector w.r.t the first
	// element of pair
	sort(vec.begin(),vec.end());

	for(int i=0;i<n;i++)
    {
        cout<<vec[i].first<<"  "<<vec[i].second<<endl;
    }
cout<<endl;
	int ans=0,c=0,j;

	for(int i=0;i<n;i++)
	{
		// If the element is already placed
		// correct, then continue
		if(vec[i].second==i)
			continue;
		else
		{
			// swap with its respective index
			swap(vec[i].first,vec[vec[i].second].first);
			swap(vec[i].second,vec[vec[i].second].second);
		}

		for(int i=0;i<n;i++)
    {
        cout<<vec[i].first<<"  "<<vec[i].second<<endl;
    }
    cout<<endl;
		// swap until the correct
		// index matches
		if(i!=vec[i].second)
			--i;


		// each swap makes one element
		// move to its correct index,
		// so increment answer
		ans++;
	}
	for(int i=0;i<n;i++)
    {
        cout<<vec[i].first<<"  "<<vec[i].second<<endl;
    }
cout<<endl<<endl<<endl;

	return ans;
}

// Driver code
int main()
{
	int arr[] = {1, 5, 4, 3, 2};

	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<findMinSwap(arr,n);

	return 0;
}
