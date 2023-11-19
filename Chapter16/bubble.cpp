#include <iostream>
using namespace std;

void bubbleSort(int list[10], int length) {
    for (int it = 1; it < length; it++){ 
        for (int i = 0; i < length - 1; i++) {
            int curr = list[i];
            if (list[i] > list[i + 1]) {
                list[i] = list[i + 1];
                list[i + 1] = curr;
            }
        }
    }

    for (int j = 0; j < length; j++) {
        cout << list[j] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {15, 30, 2, 3, 234, 1, 6, 7, 5, 23};
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr, 10);
}