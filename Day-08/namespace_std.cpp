#include <iostream>
using namespace std;
    namespace virat
    {
        void show(){
            cout<<"Virat is a good batsman"<<endl;
        }
    }
    namespace rohit
    {
        void show(){
            cout<<"Rohit is better player than Virat"<<endl;
        }
    }
    int main(){
        virat::show();
        rohit::show();
        return 0;
    }