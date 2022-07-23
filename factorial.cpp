#include <iostream>


using namespace std;

int find_factorial(int x) {
    if (x == 0)
        return 1;
    else
        return x * find_factorial(x - 1);
}

int factorial() {
    cout << "Factorial (10) = " << find_factorial(10) << endl;
}