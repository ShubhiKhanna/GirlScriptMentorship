#include <iostream>

using namespace std;

unsigned int Tribonacci(unsigned int n)
{
    unsigned int term[n];
    term[0] = term[1] = 0;
    term[2] = 1;

    for (unsigned int i = 3; i < n; i++)
    {
        term[i] = term[i - 1] + term[i - 2] + term[i - 3];
    }

    for (unsigned int i = 0; i < n; i++)
    {
        cout << term[i] << " ";
    }
}

int main()
{
    unsigned int n;
    cout << "Enter n: ";
    cin >> n;
    Tribonacci(n);
    return 0;
}