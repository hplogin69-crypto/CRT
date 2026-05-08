#include <iostream>
using namespace std;
        class student {
            private:
            int registration_no = 1515;
            public:
            int roll_no;
            string name;
            
           void display (){
            cout<<"Roll_No. of student is : " << roll_no << endl;
            cout<<"Name of the student is : " << name << endl;
            cout<<"Registration no. of the student is : " <<registration_no<<endl;
           
        }
          
        // member func
       
    };
        int main () {
            
            student s1;
            s1.name="Sumit";
            s1.roll_no=151;
            s1.display();
           
            
            return 0;
        }
