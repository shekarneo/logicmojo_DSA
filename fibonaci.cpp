#include <iostream>
using namespace std;

void fibonacciSeries(int n)
{
    int a = 0;
    int b = 1;

    cout << a << " "; // print first number
    if (n > 1)
        cout << b << " "; // print second number

    for (int i = 2; i < n; i++) // loop starts from 2 since first two already printed
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

// Recursive function to return nth Fibonacci number
int fibonacci(int n)
{
    if (n == 0)
        return 0; // base case
    if (n == 1)
        return 1;                               // base case
    return fibonacci(n - 1) + fibonacci(n - 2); // recursion
}

int main()
{
    int n = 6;
    fibonacciSeries(n);

    cout << "Fibonacci series up to " << n << " terms:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
