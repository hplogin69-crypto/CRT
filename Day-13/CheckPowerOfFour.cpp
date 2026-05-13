#include <iostream>
using namespace std;
bool isPow(int n){
    if(n==0)
    return false;
    if(n==1)
    return true;

    return (n%4==0) && isPow(n/4);
}
int main (){
    cout <<"Enter the no. of test case :";
    int t;
    cin >> t;
    while (t--){
    cout << "Enter number ";
    int n;
    cin >> n;

    bool result = isPow(n);
                if (result)
                cout << n << " is a power of 4."<<endl;
                else
                cout << n << " is not a power of 4."<<endl; 
            }
                return 0;
        }