#include <iostream>
using namespace std;

void printStars(int lines);

int main()
{
    int lines;
    cout << "Enter the number of lines in the grid: ";
    cin >> lines;
    cout << endl;
    printStars(lines);
    cout << endl;
    return 0;
}

void printStars(int lines) {
    int i;
    int j;
    if (lines > 0) {
        for (i = 0; i < lines; i++) {
            cout << "*";
        }
        cout << endl;
        printStars(lines - 1);
        for(j = 0; j < lines; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
