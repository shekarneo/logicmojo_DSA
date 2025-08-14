#include <iostream>
#include <cmath>
using namespace std;

// O(root(n))
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// sieve of eratosthenes approach.

int main()
{
    int n = 23;
    cout << "prime or not: " << isPrime(n) << endl;

    // find all the prime numbers from 1 to N. O(n*root(n))
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i) == 1)
        {
            cout << i << " " << endl;
        }
    }
}