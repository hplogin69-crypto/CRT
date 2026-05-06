#include <iostream>
using namespace std;
    class student {
        public:
        // data members
        int roll_no;
        string name;
        // member function
        void display () { 
        cout<<"Roll No. of student : " << roll_no<<endl;
        cout<<"Name of student is : " << name <<endl;
        
        }
    };
        int main () {
        student s1;
        s1.roll_no = 1515;
        s1.name = "Sumit";
        s1.display();
        return 0;
    }