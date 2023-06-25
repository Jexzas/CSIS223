#include <iostream>
using namespace std;

class rectangleType {
    public:
        rectangleType() {
            length = 0;
            width = 0;
        };
        rectangleType(int x, int y) {
            if (x >= 0) {  
                length = x;
            };
            if (y >= 0) {
                width = y;
            };
        }
        void setDimensions(int x, int y) {
            if (x >= 0) {  
                length = x;
            };
            if (y >= 0) {
                width = y;
            };
        }
        int getLength() const {
            return length;
        }
        int getWidth() const {
            return width;
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

class boxType: public rectangleType {
    public: 
        boxType(int x, int y, int z) {
            if (x >= 0) {  
                length = x;
            };
            if (y >= 0) {
                width = y;
            };
            if (z >= 0) {
                height = z;
            };
        };
        boxType() {
            length = 0;
            width = 0;
            height = 0;
        } ;  
        void setDimensionsZ(int x, int y, int z) {
            if (x >= 0) {  
                length = x;
            };
            if (y >= 0) {
                width = y;
            };
            if (z >= 0) {
                height = z;
            };
        };
        int height;
        int getHeight() const {
            return height;
        };
        double volume() const {
            return length * width * height;
        };
        double surfaceArea() const {
            return (2 * area()) + (perimeter() * height);
        };
        void print() const {
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
            cout << "Height: " << height << endl;
            cout << "Surface Area: " << surfaceArea() << endl;
            cout << "Volume: " << volume() << endl;
        };
};

int main () {   
    rectangleType newRec(2, 4);
    boxType newBox(2, 4, 5);
    newRec.print();
    newBox.print();
    return 0;
}