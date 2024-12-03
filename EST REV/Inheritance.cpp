#include<iostream>
using namespace std;
class Vehicle{
    public:
    string name;
    string fuel;
    float speed;
    int cost;
    Vehicle(){
        cout<<"Vehicle Constructor"<<endl;
    }
    ~Vehicle(){
        cout<<"Vehicle DESTRUCTOR"<<endl;
    }
    Vehicle(string name,string fuel,float speed,int cost){
        this->name=name;
        this->fuel=fuel;
        this->speed=speed;
        this->cost=cost;
    }
    void print(){
        cout<<this->name<<endl;
        cout<<this->fuel<<endl;
        cout<<this->speed<<endl;
        cout<<this->cost<<endl;
    }
};
class TwoWheeler:public Vehicle{
    public:
    int bootspace;
    string company;
    TwoWheeler(){
        cout<<"2 wheeler constructor"<<endl;
    }
    ~TwoWheeler(){
        cout<<"2 wheeler DEStructor"<<endl;
    }
    TwoWheeler(string name,string fuel,float speed,int cost,int bootspace,string company):Vehicle(name,fuel,speed,cost){
        this->bootspace=bootspace;
        this->company=company;
    }
};
class FourWheeler:public Vehicle{
    public:
    int capacity;
    string model;

};
class Rickshaw: public TwoWheeler,public FourWheeler{
    public:
    string color;

};
class Bike:public TwoWheeler{
    public:
    string metal;
    
};
int main(){

}