#include <iostream>
#include <cmath>
#include <vector>
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
void allPrimeLessThanNSE(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n = 23;
    cout << "prime or not: " << isPrime(n) << endl;

    // find all the prime numbers from 1 to N. O(n*root(n))
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i) == 1)
        {
            cout << i << " ";
        }
    }

    cout << endl;
    cout << "from seive of e method: " << endl;
    allPrimeLessThanNSE(n);
}