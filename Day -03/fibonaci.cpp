#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter a no. to print a fibonaci series ";
    cin>>n;
    // for the last two values
    int prev1 =1;
    int prev2 =0;
    for(int i=1; i<=n; i++){
        
        if (i > 2){
            int current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
            cout<<current <<" ";
        }
        else if (i ==1){
            cout<<prev2;
        }
        else if (i ==2){
            cout<<prev1;
        }
    }
}