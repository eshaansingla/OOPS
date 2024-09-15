#include<iostream>
using namespace std;
class Players{
string name;
public:
int runs;
void setdetails(){
    cout<<"Name: ";
    cin>>this->name;
    cout<<"Runs: ";
    cin>>this->runs;
}
void pdetails(){
    cout<<"Name: "<<name<<endl;
    cout<<"Runs: "<<runs<<endl;
}
};
class Team{
    int score=0;
    string name;
    Players p[3];
public:
   void setTeam(string name){
    this->name=name;
    }
    void setplayers(){
        cout<<"Enter details for "<<this->name<<":"<<endl<<endl;
        for(int i=0;i<3;i++){
            p[i].setdetails();
        }
    }
    void print(){
       for(int i=0;i<3;i++){
            p[i].pdetails();
        } 
        cout<<"Total Runs: "<<score<<endl;
    }
    void total(){
        for(int i=0;i<3;i++) score+=p[i].runs;
    }
    friend void score(Team t1, Team t2);
};
void score(Team t1, Team t2){
if(t1.score>t2.score){
    cout<<t1.name<<" WON by "<<t1.score-t2.score<<" runs"<<endl;
}
else cout<<t2.name<<" WON by "<<t2.score-t1.score<<" runs"<<endl;
}
int main(){
Team Aus,NZ;
Aus.setTeam("Australia");
Aus.setplayers();
Aus.total();
Aus.print();
NZ.setTeam("New Zealand");
NZ.setplayers();
NZ.total();
NZ.print();
score(Aus,NZ);
}