/*
https://www.geeksforgeeks.org/sieve-of-eratosthenes/
https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes

*/

#include<iostream>
#include<math.h>
using namespace std;
int SieveOfEratosthenes(int n)
{

    int primes[n+1];
    for( int i = 0; i<=n; i++)
        primes[i] = 1;

    primes[0] = primes[1] = 0;

    for(int i=2; i<=sqrt(n); i++)
    {
        if(primes[i] == 1)
        {
            for(int j=2; i*j <=n ; j++)
                primes[i*j] = 0;
        }
    }
    for (int i=2; i<=n; i++)
       if (primes[i])
          cout << i << " ";
          return 0;
}

int main()
{
    int n = 100;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    return 0;
}
