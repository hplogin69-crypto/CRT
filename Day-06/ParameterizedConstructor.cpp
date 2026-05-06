#include <iostream>
using namespace std;
    class cricketers {
        public:
        string name;
        int runs;
        double avg;
        // parameterized constructor
        cricketers(string n, int r, double avg) {
            name = n;
            runs = r;
            this->avg = avg;

        }
        // member function to display the details of the cricketer
        void show (){
            cout << "Name: " << name << endl;
            cout << "Runs: " << runs << endl;
            cout << "Average: " << avg << endl;
        }
    };
        int main() {
            // creating an object of the cricketers class using the parameterized constructor
            cricketers c1("Sachin Tendulkar", 18426, 44.83);
            // displaying the details of the cricketer
            c1.show();
            return 0;
    }
