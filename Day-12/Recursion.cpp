#include <iostream>
using namespace std;
// int main (){
//     for (int i=1; i<=10; i++)
//     cout << i << " " ;
//     return 0;
// }

int printNumb (int n){

if (n==0){
    return n;
}
    printNumb(n-1);
    cout<< n <<" ";
}



int main (){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    printNumb (n);
    return 0;
}
