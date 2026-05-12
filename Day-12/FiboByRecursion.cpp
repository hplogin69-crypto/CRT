#include<iostream>
using namespace std;
int fib (int n ){
    if (n==1 || n==2)
    return 1;
    if (n==0)
    return 0;
     int ans  = fib(n-1)+ fib(n-2);
    cout<<"Fibonacci serire : "<<ans<<endl;
    return ans;
}
int main (){
    int n;
    cout<<"enter a numb :";
    cin>>n;
     cout<<"Fibonacci serire : "<<fib(n);
   return 0;
    
}