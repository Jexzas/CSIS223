#include <iostream>
using namespace std;

int puzzle(int start, int end) {
    if (start > end) {
        return start - end;
    } else if (start == end) {
        return start + end;
    } else {
        return end * puzzle(start + 1, end - 1);
    }
}

int main() {
    cout << puzzle(5, 10) << endl;
}