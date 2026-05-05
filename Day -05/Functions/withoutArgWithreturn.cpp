#include <iostream>
using namespace std;
int add (int a=3,int b=3){
    int c=a+b;
    cout<<"after addition :"<<endl<<c;
    return c;
}
    int main() {
         add ();
        return 0;
    }