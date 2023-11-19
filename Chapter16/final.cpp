#include <iostream>
using namespace std;

int mystery(int num) {
    if (num <= 0) {
        return 0;
    } else if (num % 2 == 0) {
        return num + mystery(num - 1);
    } else {
        return num * mystery(num - 1);
    }
}

int main() {
    cout << mystery(5) << endl;
}