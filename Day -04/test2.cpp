// waf with default arg and calling it with and without parameters
#include <iostream>
using namespace std;
int def(int a, int b=4){
    int c=a+b;
    return c;
}
int main(){

    cout<<"Adding one with default arg : 3 "<<endl <<def(4)<<endl;

    cout<<"Adding another with new arg i.e : 4 "<<endl <<def(4,5)<<endl;
}