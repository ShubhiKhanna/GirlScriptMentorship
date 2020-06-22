#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long num, reverse = 0;
        int rem;
        cin >> num;
        while (num != 0)
        {
            rem = num % 10;
            reverse = (reverse * 10) + rem;
            num /= 10;
        }
        cout << reverse << endl;
    }
}