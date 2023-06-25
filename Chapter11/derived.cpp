#include <iostream>
using namespace std;

class rectangleType {
    public:
        rectangleType() {
            length = 0;
            width = 0;
        };
        rectangleType(int x, int y) {
            length = x;
            width = y;
        }
        double length;
        double width;
        double area() const {
            return length * width;
        };
        double perimeter() const {
            return (2 * length) + (2 * width);
        };
        void print() const {
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
            cout << "Perimeter: " << perimeter() << endl;
            cout << "Area: " << area() << endl;
        };
};

int main () {   
    rectangleType newRec(2, 4);
    newRec.print();
    return 0;
}