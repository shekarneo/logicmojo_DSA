#include <iostream>
#include <vector>
using namespace std;

// TC = O(N), SC=O(N)
static int linearSearch(const vector<int> arr, int target)
{
    for (int i : arr)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    const vector<int> arr = {1, 2, 4, 10, 8, 9};
    cout << linearSearch(arr, 81) << endl;
}