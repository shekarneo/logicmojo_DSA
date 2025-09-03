#include <iostream>
using namespace std;

bool powerOfTwo(int n)
{
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}

int main()
{
    int n = 16;

    if (powerOfTwo(n))
        cout << "its a power of 2" << endl;
    else
        cout << "not a power of 2" << endl;
}
