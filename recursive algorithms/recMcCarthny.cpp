#include <iostream>
using namespace std;

int count_McCarthny(int x) {
    if (x > 100)
        return (x - 10);
    else
       return count_McCarthny(count_McCarthny(x + 11));
}

int recMcCarthny(int x) {
    cout << "McCarthny function(" << x << ") returned " << count_McCarthny(x) << endl;
}