#include<iostream>
using namespace std;
class Gta{
    public:
    Gta(){

    }
        string name;
        string game;
        int age;
        float rating;
        Gta(string name,string game,int age,float rating){
            this->name=name;
            this->game=game;
            this->age=age;
            this->rating=rating;
    }
    void print() {
            cout<<"Name: "<<name<<endl<<"Game: "<<game<<endl<<"Age: " <<age<<endl;
            cout<<"Rating: "<<rating<<endl<<endl;
    }
   void changes(Gta *sonny){
        sonny->rating=6.9;
   }
};
int main(){
    Gta tommy("Tommy Vercetti","GTA Vice City",30,7.5);
    Gta cj("CJ","GTA San Andreas",27,9.2);
    Gta micheal;
    micheal.name="Micheal";
    micheal.age=49;
    micheal.game="GTA V";
    micheal.rating=9.8;
    Gta *frankmentor=&micheal;
    cout<<(*frankmentor).game<<endl;
    frankmentor->age=24;
    cout<<micheal.age<<endl;
    micheal.changes(&tommy);
    tommy.print();

    cj.print();
    micheal.print();
}