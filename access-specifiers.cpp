#include<iostream>
#include<string.h>
using namespace std;
class Avengers{
    public:
        string name;
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
        void setname(string realname){
            this->realname=realname;
        }
        void getname(){
            cout<< this->realname<<endl;
        }
        void swap(Avengers &c1, Avengers &c2){
            string temp=c1.realname;
            c1.realname=c2.realname;
            c2.realname=temp;

        }
        private:
        string realname;
};
int main(){
    Avengers ironman("Iron Man","Tony Stark",1,3000);
    ironman.print();

    Avengers cap;
    cap.name="Captain America";
    cap.setname("Steve Rogers");
    cap.tier=1;
    cap.respect=100;
    cap.print();

    Avengers *spidey= new Avengers("Spider Man","Peter Parker",1,75);
    spidey->print(); //Dyanamic Allocation

    cap.swap(cap,ironman);
    cap.print();
    ironman.print();
    

}