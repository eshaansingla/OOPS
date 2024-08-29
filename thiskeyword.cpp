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
    void print1(int age,string name){
        cout<<"Name: "<<name<<endl<<"Game: "<<game<<endl<<"Age: " <<age<<endl;
        cout<<"Rating: "<<rating<<endl<<endl;
        cout<<"Name: "<<name<<endl<<"Age: " <<age<<endl<<endl;
    }
    void print2(int age,string name){
        cout<<"Name: "<<this->name<<endl<<"Game: "<<this->game<<endl<<"Age: " <<this->age<<endl;
        cout<<"Rating: "<<this->rating<<endl<<endl;
        cout<<"Name: "<<name<<endl<<"Age: " <<age<<endl<<endl;
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
   /* tommy.print();
    cj.print();
    micheal.print();
    tommy.print1(23,"The text should be changed");
    cj.print1(36,"The text should be changed !!");
    micheal.print1(69,"The text should be changed !");*/
    tommy.print2(23,"The text should not be changed");
    cj.print2(36,"The text should be not changed !!");
    micheal.print2(69,"The text should not be changed !");

}