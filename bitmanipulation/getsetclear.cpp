#include <iostream>
using namespace std;

int main()
{

    int n = 14;
    int i = 2;
    int get;
    int set;
    int clear;

    // get = (n >> i) & 1;
    get = n & (1 << i);
    set = n | (1 << i);
    clear = n & ~(1 << i);

    if (get > 0)
    {
        cout << "Get: " << 1 << endl;
    }
    else
    {
        cout << "Get: " << 0 << endl;
    }
    cout << "set: " << set << endl;
    cout << "Clear: " << clear << endl;
    return 0;
}