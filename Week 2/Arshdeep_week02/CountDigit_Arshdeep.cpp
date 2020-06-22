#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    //int arr[test];
    long num;
    while (test--)
    {
        //long num;
        cin >> num;
        double count = 1;
        for (long i = 1; i <= num; i++)
        {
            count += log10(i);
            //arr[i] = count;
        }
        cout << int(count) << "\n";
    }
    // while (test--)
    // {
    //     for (int i = 1; i < = num; i++)
    //     {
    //         /* code */
    //         cout << arr[i] << endl;
    //     }
    // }
    return 0;
}