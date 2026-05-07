#include <iostream>
using namespace std;
    // parent or main boss class
    class player{
        public :
        string name;
        int age;
        void setName (string a, int k) {
            name =a;
            age =k;
        }

        
    };
    class cricket {
        public:
        int score;
        void setscore(int r){
            score =r;
        }
    };
    class lefty : public player, public cricket {
        public :
        string handed;
        void show () {
            cout<<"Player's name is :"<<name<<endl;
            cout<<"Player's age is :"<<age<<endl;
            cout<<"player's scoer is :"<<score<<endl;
            cout<<"Player is "<<handed<<"handed"<<endl;
        }
        
    };
        int main (){
            lefty c1;
            cout<<"enter player's name & age :";
            string a;
            int k;
            cin >>a,k;
            int r;
            cout<<"enter player's score :";
            cin >>r;
            c1.setName(a,k);
            c1.setscore(r);
            string handed = "lefty";
            
        }