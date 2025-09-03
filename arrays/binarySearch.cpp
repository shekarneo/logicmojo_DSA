#include <iostream>
#include <vector>
using namespace std;

// TC=O(logN), SC=O(1)
int binarySearch(const vector<int> &arr, int target)
{
    int l = 0;
    int r = arr.size() - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target)
        {
            return mid; // return index
        }

        if (target > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1; // not found
}

// TC=O(logN), SC=O(logN)
int binarySearchRecursive(const vector<int> arr, int target, int l, int r)
{
    if (l > r)
        return -1; // terminating cond
    int mid = l + (r - l) / 2;
    if (arr[mid] == target)
        return mid;
    if (target > arr[mid])
        return binarySearchRecursive(arr, target, mid + 1, r); // reducing left boundary
    return binarySearchRecursive(arr, target, l, mid - 1);
}

int main()
{
    const vector<int> arr = {1, 2, 4, 8, 9, 10};
    int target = 2;

    int idx = binarySearch(arr, target);

    if (idx != -1)
        cout << "Found at index " << idx << ", value = " << arr[idx] << endl;
    else
        cout << "Not found" << endl;

    int l = 0;
    int r = size(arr) - 1;
    int idx_rec = binarySearchRecursive(arr, target, l, r);
    if (idx_rec != -1)
        cout << "Found at index " << idx << ", value = " << arr[idx_rec] << endl;
    else
        cout << "Not found" << endl;
}
