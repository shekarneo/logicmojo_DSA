#include <iostream>
using namespace std;

void towerOfHanoiRecursive(int n, char source, char aux, char destination)
{
    if (n == 1)
    {
        cout << "Move Disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Step 1: Move n-1 disks from source to aux using destination
    towerOfHanoiRecursive(n - 1, source, destination, aux);

    // Step 2: Move nth disk from source to destination
    cout << "Move Disk " << n << " from " << source << " to " << destination << endl;

    // Step 3: Move n-1 disks from aux to destination using source
    towerOfHanoiRecursive(n - 1, aux, source, destination);
}

int main()
{
    int n = 3;
    char source = 'A';
    char aux = 'B';
    char destination = 'C';

    towerOfHanoiRecursive(n, source, aux, destination);

    return 0;
}
