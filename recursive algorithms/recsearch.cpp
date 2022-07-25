#include <iostream>
using namespace std;

const int n = 10;
int tabToSearch[n] = {3, 4, 6, 27, 9, 2, 1, 12, 33, 8};

void search(int tab[n], int left, int right, int x) {
    if (left > right)
        cout << "Element " << x << " not found\n";
    else
        if (tab[left] == x)
            cout << "Element " << x << " found" << endl;
        else search(tab, left + 1, right, x);
}

int recsearch(int x) {
    search(tabToSearch, 0, n-1, x);
}