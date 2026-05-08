#include <iostream>
using namespace std;
// constructor override to calculate the area of a rectangle ,circle and triangle
    class area {
        public:
       int length, breadth , width;
       area (int length, int breadth) {
        this -> length = length;
        this -> breadth = breadth;
       }
       area (int radius) {
        this -> length = radius;
       }
       area (){
        length = 0;
        breadth = 0;
       }
         void show(){
            cout << "Area of rectangle: " << length * breadth << endl;
            cout << "Area of circle: " << 3.14 * length * length << endl;
            cout << "Area of triangle: " << 0.5 * length * breadth << endl;
         }
        };
        int main() {
            area a1(5, 10);
            area a2(7);
            area a3;
            cout << "Area of rectangle: " << a1.length * a1.breadth << endl;
            cout << "Area of circle: " << 3.14 * a2.length * a2.length << endl;
            cout << "Area of triangle: " << 0.5 * a3.length * a3.breadth << endl;
            return 0;
        }