//wacPPp that takes an input and calculate its factorial using for loop
#include <iostream>
using namespace std;
int main () {
    int a;
    cout <<"enter a no. to find's its factorial :";
    cin>>a;
    int ans=1;
    for(int i=1; i<=a; i++){
        ans *=i;
        
    }
    cout<<ans;
}