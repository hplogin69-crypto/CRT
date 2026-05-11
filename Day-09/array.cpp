#include <iostream>
using namespace std;
    int main (){
        int n;
        int size;
        cout<<"Enter the no. of elements u want in an array :"<<endl;
        cin >> n;
        int arr[n] = {1, 2, 3, 4, 5};
        for (int i = 0; i < 5; i++){
            cout << arr[i] << " ";
        }
        size = sizeof (arr)/sizeof (int);
        cout << endl;
        cout<<size;
        return 0;
    }
    