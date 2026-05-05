// swap two no. using pointers
#include <iostream>
using namespace std;
 void swapNumb (int *a,int *b){
    int temp =*a;
    *a =*b;
    *b =temp;
 }
 int main()
 {
    int a,b;
    cin >> a >>b;
    swapNumb(&a,&b);
    cout<<a<<" "<<b <<endl;
    return 0;    
}