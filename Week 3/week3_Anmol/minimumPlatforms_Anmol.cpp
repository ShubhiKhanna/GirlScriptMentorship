//   https://practice.geeksforgeeks.org/problems/minimum-platforms/0
// Program to find minimum number of platforms
// required on a railway station
#include <algorithm>
#include <iostream>

using namespace std;

// Returns minimum number of platforms reqquired
int findPlatform(int arr[], int dep[], int n)
{
	// Sort arrival and departure arrays
	sort(arr, arr + n);
	sort(dep, dep + n);

	// plat_needed indicates number of platforms
	// needed at a time
	int plat_needed = 1, result = 1;
	int i = 1, j = 0;

	// Similar to merge in merge sort to process
	// all events in sorted order
	while (i < n && j < n) {

		// If next event in sorted order is arrival,
		// increment count of platforms needed
		if (arr[i] <= dep[j]) {
			plat_needed++;
			i++;
		}

		// Else decrement count of platforms needed
		else if (arr[i] > dep[j]) {
			plat_needed--;
			j++;
		}

		// Update result if needed
		if (plat_needed > result)
			result = plat_needed;
	}

	return result;
}

// Driver program to test methods of graph class
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n], dep[n]
;        for(int i=0; i<n ; i++)
            cin>>arr[i];
        for(int i=0; i<n ; i++)
            cin>>dep[i];
	cout << findPlatform(arr, dep, n)<<endl;
    }
	return 0;
}
