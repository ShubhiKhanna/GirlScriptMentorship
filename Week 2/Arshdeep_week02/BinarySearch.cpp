#include <iostream>

using namespace std;
int BinarySearch(int a[], int beg, int end, int x)
{
    if (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] > x)
        {
            return BinarySearch(a, beg, mid - 1, x);
        }
        else if (a[mid] < x)
        {
            return BinarySearch(a, mid + 1, end, x);
        }
    }
    return -1;
}

int main()
{
    int arr[]{2, 4, 6, 35, 56, 78, 109, 300, 789, 1009};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Enter element: ";
    cin >> x;
    int index = BinarySearch(arr, 0, n - 1, x);
    (index == -1) ? cout << "\n Element not present\n" : cout << "\nElement present at " << index << " position.\n";
}
