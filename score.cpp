#include<iostream>
using namespace std;
class Team;
class Player{
    string name;
        int score;
    public:
        void setplayer(string name,int score){
            (*this).name=name;
            this->score=score;
        }
        void display(){
            cout<<"Name: "<<this->name<<endl<<"Score: "<<this->score<<endl;
    }
    friend class Team;
};
class Team{
    public:
        int sum=0;
        Player players[5];
        string names;
        int scores;
        void setteam(){
            for(int i=0;i<5;i++){
            cout<<"Enter name:";
            cin>>names;
            cout<<"Enter score:";
            cin>>scores;
            players[i].setplayer(names,scores);
            }
        }
        void display(){
            for(int i=0;i<5;i++){
                players[i].display();
            }
            cout<<endl<<endl;
        }
        void addscore(){
            for(int i=0;i<5;i++){
                (this->sum)+=players[i].score;
            }
        }
        friend void comparison(Team T1, Team T2);
};
void comparison(Team ind,Team pak){
    if(ind.sum>pak.sum) cout<<"India won"<<endl;
    else cout<<"Pak Lost"<<endl;
}
int main(){
    Team Ind;
    Team Pak;
    cout<<"Set Details:"<<endl<<endl;
    Ind.setteam();
    cout<<endl;
    Pak.setteam();
    cout<<endl;
    cout<<"Scorecard:"<<endl<<endl;
    Ind.display();
    Ind.addscore();
    Pak.display();
    Pak.addscore();
    comparison(Ind,Pak);

}