#include<iostream>
using namespace std;
class Avengers{
    public:
        string name;
        string realname;
        int tier;
        float respect;
        Avengers(){

        }
        Avengers(string name,string realname,int tier,float respect){
            this->name=name;
            this->realname=realname;
            this->tier=tier;
            this->respect=respect;
        }
        void print(){
            cout<<"Name: "<<this->name<<endl<<"Real name: "<<this->realname<<endl;
            cout<<"Tier: "<<this->tier<<endl<<"Respect: "<<this->respect<<endl<<endl;
        }
};
int main(){
    Avengers ironman("Iron Man","Tony Stark",1,3000);
    ironman.print();

    Avengers cap;
    cap.name="Captain America";
    cap.realname="Steve Rogers";
    cap.tier=1;
    cap.respect=100;
    cap.print();
    
    Avengers *spidey= new Avengers("Spider Man","Peter Parker",1,75);
    spidey->print(); //Dyanamic Allocation


}