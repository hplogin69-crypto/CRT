#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main (){
    string str =" Hell o";
    string str2 =" help please";
    cout<<str<<endl;

    // length of string 
    int n= str.length();
    cout<<"Length of string is "<<n<<endl;
    // append a string (it will update the string and change the value with adding the new value)
    cout<<"After appending "<<str.append(" There ")<<endl;
    // concatenate ( it will only add the string for once and not update or change the og string)
    cout<<"After concatenating "<<str+" Glad you are alive "<<endl;
    // push back
    str2.push_back('hel');
    cout<<"After push_back method :"<<str2<<endl;
    // pop_back
    str.pop_back();
    cout<<"After pop_back method :"<<str2<<endl;
    // //find() method
    int index=str2.find ("please");
    cout<<"Index of 'please' in str1:" <<index << endl;
    //at() method
    char ch = str2.at(1);
    cout<<"character at index 1 in str2 is :"<<ch<<endl;
    //swap 
    str.swap(str2);
    cout<<"After swapping str and str2 :"<<endl; 
    cout<<"str :"<<str<<endl;
    cout<<"str2 :"<<str2<<endl;
    //substr()
    string subStr = str2.substr(5,11);
    cout<<"Substring of str2 from index 5 with length 11 :"<<subStr <<endl;
    //getline() method
    string str3;
    // cin >> str3;
    getline(cin , str3);
    cout<<"You entered :"<<str3<<endl;
}