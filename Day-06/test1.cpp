#include <iostream>
using namespace std;
// constructor override to calculate the area of a rectangle ,circle and triangle
    class area {
        public:
        // constructor to calculate the area of a rectangle
        area(int length, int breadth) {
            cout << "Area of rectangle: " << length * breadth << endl;
        }
        // constructor to calculate the area of a circle
        area(double radius) {
            cout << "Area of circle: " << 3.14 * radius * radius << endl;
        }
        // constructor to calculate the area of a triangle
        area(int base, int height, int) {
            cout << "Area of triangle: " << 0.5 * base * height << endl;
        }
    };
     int main () {
        area a1(5,20);
        area a2(7.5);
        area a3(10,15,0);   
        return 0;
     }
