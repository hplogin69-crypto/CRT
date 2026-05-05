#include <iostream>
using namespace std;
int main () {
    char x;
    cout<<"Enter a letter to check if it's capital letter or not : ";
    cin>>x;

        if(x>=65 && x<=90)
            {
            cout<<"Entered character : "<< x <<" is a capital letter ";
            }
        else if (x>=97 && x<=122)
            {
                cout<<"Entered character is a small letter";
            }
        else {
        cout<<"Invalid Input: ";
        }
        return 0; 

}