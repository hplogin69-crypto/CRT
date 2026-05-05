// waf that applies 10% discount using refrence bill and print the updated bill 
#include <iostream>
using namespace std;
int ogbill,disbill;
int discount (int percent){
    ogbill = 100;
    disbill =ogbill -(ogbill %percent);
    return disbill;
}
int main () {
    int disbill;
   cout<<"Bill after discount is :"<<endl;
    int discount(10);
    
    return 0;
}