#include <iostream>
using namespace std;
int sum(int n){
    if (n==0){
        return 0;
    }    
        int ans = (n % 10)+ sum (n / 10);
        return ans;
    }

    int main (){
        int n;
        cout<<"Enter the digit :"<<endl;
        cin>>n;
        cout<<"Sum of Each Digits of number is :"<<endl<<sum(n);
        return n;
    }