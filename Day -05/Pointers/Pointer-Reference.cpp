#include <iostream>
using namespace std;
 int main (){
    int value =19;
    int *ptr =&value;

    cout<<"Adr: " <<ptr<<endl;
    cout<<"Value: "<< *ptr <<endl;

    *ptr =20;
    cout<<"Value: " << *ptr <<endl;
    cout<<"Value: " << value <<endl;
    return 0;
}