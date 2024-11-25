#include<iostream>
using namespace std;
class Player{
    public:
    int score;
    string name;
    Player(){

    }
    Player(int score,string name){
        this->name=name;
        this->score=score;
    }

};
int main(){
Player*newplayer=new Player(10000,"Rohit");
cout<<newplayer->name<<" "<<newplayer->score<<endl;
}