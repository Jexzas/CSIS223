#ifndef cylinderType_H
#define cylinderType_H
#include "circleType.h"

using namespace std;

class cylinderType : public circleType {
    private: 
        double height;
    public:
        cylinderType(double r = 0, double h = 0);  
        void print();
        void setHeight(double h);
        double area();
        double getHeight();
        double volume();
        double getSurfaceArea();
};

#endif
