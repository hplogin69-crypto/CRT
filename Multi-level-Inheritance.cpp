#include <iostream>
using namespace std;

// Parrent Class for cricketer 
class Player
{
public:
    string name;
    int age;
    void setName(string n)
    {
        name = n;
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
    int r;
    cin >> r;
    string s;
    cin >>s;
    Cricketer c1;
    IndianCricketer c2;
    c1.setName("Virat");
    c1.setruns(r);
    c1.show();
    c2.setstate(s);
     c2.show();
   

    return 0;
}