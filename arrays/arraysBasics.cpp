#include <iostream>
using namespace std;

static int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n = 5;
    int res = factorial(n);
    cout << "factorial of : " << n << " is " << res << endl;
}