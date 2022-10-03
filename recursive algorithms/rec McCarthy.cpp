#include <iostream>
using namespace std;

int count_McCarthy(int x) {
    if (x > 100)
        return (x - 10);
    else
       return count_McCarthy(count_McCarthy(x + 11));
}

int recMcCarthy(int x) {
    cout << "McCarthy function(" << x << ") returned " << count_McCarthy(x) << endl;
}
