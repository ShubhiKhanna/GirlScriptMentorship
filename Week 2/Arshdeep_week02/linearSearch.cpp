#include <iostream>

using namespace std;
int LinearSearch(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            return i;
    }
    return -1;
}

int main()
{

    int arr[]{5, 7, 8, 12, 3, 98, 7, 93, 23, 54, 19, 78, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Enter element: ";
    cin >> x;
    int index = LinearSearch(arr, n, x);
    if (index == -1)
        cout << "\nElement not in list.\n";
    else
    {
        cout << "\nElement at " << index << " position.\n";
    }

    return 0;
}