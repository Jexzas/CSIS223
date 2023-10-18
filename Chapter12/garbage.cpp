#include <iostream>
using namespace std;

int main () {
    int *p;
    int x;
    x = 76;
    p = &x;
    *p = 43;
    cout << x << ", " << *p << endl;
}