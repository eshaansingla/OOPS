#include<iostream>
using namespace std;
class Vehicle{
    public:
    float speed;
    string company;
    Vehicle(float speed,string company){
        this->company=company;
        this->speed=speed;
    }
    ~Vehicle(){
        cout<<"Vehicle"<<endl;
    }
};
class Twowheeler : public Vehicle{
public:
float bootspace;
string tyrecond;
Twowheeler(float bootspace,string tyrecond,float speed,string company):Vehicle(speed,company){
        this->bootspace=bootspace;
        this->tyrecond=tyrecond;
        this->speed=speed;
        this->company=company;
}
~Twowheeler(){
    cout<<2<<"wheeler"<<endl;
}
};
class Cycle: public Twowheeler{
    public:
    int maxpeep;
    Cycle(int maxpeep,float bootspace,string tyrecond,float speed,string company):Twowheeler(bootspace,tyrecond,speed,company){
        this->maxpeep=maxpeep;
        this->bootspace=bootspace;
        this->tyrecond=tyrecond;
        this->speed=speed;
        this->company=company;
    }
    ~Cycle(){
        cout<<"Cycle"<<endl;
    }
};
class Multi{
public:
string color;
Multi(string color){
    this->color=color;
}
~Multi(){
    cout<<"Multi"<<endl;
}
};
class Bike: public Multi,public Cycle{
public:
int gears;
string type;
Bike(int gears,string type,int maxpeep,float bootspace,string tyrecond,float speed,string company,string color):Multi(color),Cycle(maxpeep,bootspace,tyrecond,speed,company){
        this->maxpeep=maxpeep;
        this->bootspace=bootspace;
        this->tyrecond=tyrecond;
        this->speed=speed;
        this->company=company;
        this->color=color;
        this->gears=gears;
        this->type=type;
}
 ~Bike(){
        cout<<"Bike"<<endl;
        }
};
int main(){
    Cycle b(3,56.5,"Okay",45.69,"Hero");
    cout << "Cycle Details:\n";
    cout << "Speed: " << b.speed << "\n";
    cout << "Company: " << b.company << "\n";
    cout << "Bootspace: " << b.bootspace << "\n";
    cout << "Tyre Condition: " << b.tyrecond << "\n";
    cout << "Max People: " << b.maxpeep << "\n";

    Bike c1(7,"Bullet",3,56.5,"Okay",45.69,"Hero","Black");
    cout << "Cycle Details:\n";
    cout << "Speed: " << c1.speed << "\n";
    cout << "Company: " << c1.company << "\n";
    cout << "Bootspace: " << c1.bootspace << "\n";
    cout << "Tyre Condition: " << c1.tyrecond << "\n";
    cout << "Max People: " << c1.maxpeep << "\n";
    cout<<"Color: "<<c1.color<<endl;
    cout<<"Number of gears: "<<c1.gears<<endl;
    cout<<"Type: "<<c1.type<<endl;
}



