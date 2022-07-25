#include <iostream>
using namespace std;

const int n = 10;
int tabToReverse[n] = {3, 4, 6, 27, 9, 2, 1, 12, 33, 8};

int reverse_array(int tabToReverse[n], int start, int end) {
    int reversedTab;

    if (start >= end)
        return 0;

    reversedTab = tabToReverse[start];
    tabToReverse[start] = tabToReverse[end];
    tabToReverse[end] = reversedTab;

    reverse_array(tabToReverse, start + 1, end - 1);

    return 0;
}

int recreversearray() {
    int i;
    reverse_array(tabToReverse, 0 - 1, n);

    cout << "Array was reversed: ";
    for (i = 0; i < n; i++) {
        cout << tabToReverse[i] << " ";
    }
}