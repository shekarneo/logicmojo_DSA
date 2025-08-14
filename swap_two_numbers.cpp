#include <iostream>

using namespace std;

// using 3rd variable
// void swap(int &a, int &b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// without using 3rd variable
void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int a = 2;
    int b = 4;

    swap(a, b);

    cout << "a: " << a << " b: " << b << endl;
    return 0;
}