#include <iostream>
using namespace std;

void modifyX(char *x) {
    *x = 'B';
}

void modifyZ(char& z) {
    z = 'Z'; 
}

void testPtrs(int* &h) {
    cout << "Reference h: " << h << endl;
}

void testPtr(int* h) {
    cout << "Pointer h: " << h << endl;
    cout << "With a *: " << *h << endl;
}

int main () { 
    char x = 'x';
    char *y = &x;
    cout << "X = " << x <<  endl;
    cout << "Y = " << y << endl;
    cout << "Y (pointer) = " << *y << endl;
    char *z = new char;
    cout << "Z (dynamic variable)" << z << endl;
    modifyX(&x);
    cout << "Modified x = " << x << endl;
    modifyZ(*z);
    cout << "Modified z = " << &z << endl;

    int b, n;
    cout << "Enter the number of items: " << endl;
    cin >> n;
    int *array = new int(n);
    cout << "Enter " << n << " items: " << endl;
    for (b = 0; b < n; b++) {
        cin >> array[b];
    }
    cout << "Entered array:" << endl;
    for (b = 0; b < n; b++) {
        cout << array[b] << " ";
    }
    delete array;
    cout << "Did post get deleted? " << endl;
    for (b = 0; b < n; b++) {
        cout << array[b] << " ";
    }

    int *p;
    p = new int[10];
    *p = 25;
    p++;
    *p = 35;
    for (int i = 0; i < sizeof(p); i++) {
        cout << p[i] << endl;
    }

    int g = 8;
    int *h = &g;
    testPtr(h);
    testPtrs(h);
    *h = 15;
    cout << "new g = " << g << endl;

}

