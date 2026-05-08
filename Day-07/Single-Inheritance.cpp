#include <iostream>
using namespace std;
//parent class
class player
{
    public :
    string name;
    int age;
    void setName(string n){
        name =n;
    }
};
     //Derived class
     class volly : public player{
        public :
        int score;
        void setRuns (int r){
            score =r;
        }
            void show() {
                cout<<"Name :"<< name<<endl;
                cout<<"score :" << score<<endl;
            }
     };
            int main(){
                int r;
                cin>>r;

                volly c1;
                c1.setName("Escanor");
                c1.setRuns(r);
                c1.show();
                return 0;
            }