#include <iostream>
using namespace std;

int find_fibonacci(int x) {
    if (x < 2)
        return x;

    return find_fibonacci(x - 1) + find_fibonacci(x - 2);
}

int recfibonacci(int x) {
    cout << "Fibonacci for (" << x << ") = " << find_fibonacci(x) << endl;
}