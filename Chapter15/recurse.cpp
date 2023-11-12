#include <iostream>
using namespace std;

int arr[5] = {3, 5, 6, 7, 1};

int bestNum(int num1, int num2) {
    cout << "current: " << arr[num1] << " vs " << arr[num2] << endl;
    if (size(arr) == 1) {
        return arr[0];
    } else {
        if (arr[num1] > arr[num2] && num2 < size(arr)) {
            cout << "Number 1 is greater than two. Number 1 is " << arr[num1] << endl;
            bestNum(num1, num2 + 1);
        } else if (arr[num1] < arr[num2] && num2 < size(arr)) {
            cout << "Number 1 is not greater than two. Number 1 is " << arr[num1] << endl;  
            bestNum(num2, num2 + 1); 
        } else {
            return arr[num1] > arr[num2] ? arr[num1] : arr[num2];  
        }
    }
}


int main() {
    cout << bestNum(0, 1);
}