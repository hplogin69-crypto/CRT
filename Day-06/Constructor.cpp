#include <iostream>
using namespace std;
    class constructor {
        public:
        int roll_no;
        string name;
        constructor (){
            name ="Ssh";
            roll_no=151;
        }
        void show (){
            cout<<"Roll No. of student is : " << roll_no << endl;
            cout<<"Name of the student is : " << name << endl;
            cout<<"Default constructor is called "<<endl;
        }
    };
        int main () {
            constructor c1;
            c1.show();
            return 0;
        }