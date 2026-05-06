#include <iostream>
using namespace std;
    class student {
        public:
        int roll_no =1515;
        string name ="Sumit" ;
        void display () { 
        cout<<"Roll No. of student : " << roll_no<<endl;
        cout<<"Name of student is : " << name <<endl;
        
        }
    };
    int main () {
        student s1;
        s1.display();
        return 0;
    }