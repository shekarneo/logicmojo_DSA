#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}

// euclidean approach
int gcd2(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcd2recursive(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    gcd2recursive(b, a % b);
}

int main()
{
    int a = 54;
    int b = 24;
    int result = gcd(a, b);
    cout << "gcd: " << result << endl;

    int res2 = gcd2(a, b);
    cout << "gcd2: " << res2 << endl;

    int res3 = gcd2recursive(a, b);
    cout << "gcd recursive: " << res3 << endl;
}