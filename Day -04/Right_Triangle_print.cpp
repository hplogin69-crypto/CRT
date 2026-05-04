#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the num of rows to print Right triangle: ";
    cin >>n ;
    for (int i =1; i<=n; i++) {
       
           // for printing spaces
       
             for (int j=1; j<=n-i; j++){
            cout<<" "; 
            }
    
            // for printing stars
      
            for (int k=1; k<=i; k++){
            cout<<"*";
            }
            cout<<endl;
         }
        
        return 0;
   
    }