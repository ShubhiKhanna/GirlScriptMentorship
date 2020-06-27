#include <iostream>

#define ll long long

using namespace std;

//Sieve Approach -Generate  an array containing prime numbers
void prime_sieve(int *p, int n)
{
    //first mark all odd numbers as prime
    for (int i = 3; i <= n; i += 2)
    {
        p[i] = 1;
    }
    //sieve
    for (ll i = 3; i <= n; i += 2)
    {
        //if the current number is not marked (it is prime)
        if (p[i] == 1)
        {
            //mark all  the multiples of i as not prime
            for (ll j = i * i; j < n; j += i)
            {
                p[j] = 0;
            }
        }
    }
    //special cases
    p[2] = 1;
    p[1] = p[0] = 0;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int p[n]{0};
    prime_sieve(p, n);
    for (int i = 0; i <= n; i++)
    {
        if (p[i] == 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}