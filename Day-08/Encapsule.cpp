#include <iostream>

using namespace std;
class ATM
{
private:
    int balance;

public:
   // Encapsulating
   void setbalance(int balance){
    this->balance= balance;
   }
   //withdraw method of atm
    void Withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient Balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << endl;
        }
    }
    // Show Balance Method of Atm
    int getbalance(){
        return balance;
    }
};

int main()
{
    int n;
    cin>>n;
    ATM a;
    a.setbalance(n);
    cout<<"balance is: "<< a.getbalance() <<endl;
    a.Withdraw(500);
    cout<<"balance is:"<<a.getbalance() <<endl;

    return 0;
}