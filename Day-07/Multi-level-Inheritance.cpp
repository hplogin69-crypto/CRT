#include <iostream>
using namespace std;

// Parrent Class for cricketer 
class Player
{
public:
    string name;
    int age;
    void setName(string n, int k)
    {
        name = n;
        age =k;
    }
};

//  Child Class of player class
//  parent class of indian cricketers

class Cricketer : public Player
{
public:
    int runs;
    void setruns(int r)
    {
        runs = r;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Age :" <<age<< endl;
    }
};
    
        class IndianCricketer :public Cricketer {
                public:
                string state;
                void setstate (string s){
                    state = s;
                }
                void show (){
                    cout<<"state is : " <<state<<endl;
                }

        };

int main()
{
    cout<<"enter the name and age of player :"<<endl;
    int r;
    cin >> r;
    string s;
    cin >>s;
    int k;
    cin>>k;
    Cricketer c1;
    IndianCricketer c2;
    c1.setName("Virat",k);
    c1.setruns(r);
    c1.show();
    c2.setstate(s);
     c2.show();
   

    return 0;
}