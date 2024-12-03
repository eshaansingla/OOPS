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
    FourWheeler(){
        cout<<"4 wheeler constructor"<<endl;
    }
    ~FourWheeler(){
        cout<<"4 wheeler DEStructor"<<endl;
    }
    FourWheeler(string name,string fuel,float speed,int cost,int capacity,string model):Vehicle(name,fuel,speed,cost){
        this->capacity=capacity;
        this->model=model;
    }
};
class Rickshaw: public TwoWheeler,public FourWheeler{
    public:
    string color;
    Rickshaw(){
        cout<<"TEMPU constructor"<<endl;
    }
    ~Rickshaw(){
        cout<<"TEMPUUU DEStructor"<<endl;
    }
    Rickshaw(string name, string fuel, float speed, int cost, int bootspace, string company, int capacity, string model)
    : TwoWheeler(name, fuel, speed, cost, bootspace, company), // Correct order for TwoWheeler
      FourWheeler(name, fuel, speed, cost, capacity, model) { // Correct order for FourWheeler
    cout << "Rickshaw constructor called" << endl;
}

};
class Bike:public TwoWheeler{
    public:
    string metal;
Bike(string name, string fuel, float speed, int cost, int bootspace, string company, string metal)
    : TwoWheeler(name, fuel, speed, cost, bootspace, company), metal(metal) {}

~Bike() {
    cout << "Bike destructor" << endl;
}
};
int main() {
    Rickshaw rick("Rickshaw", "Diesel", 40.0, 150000, 10, "Bajaj", 4, "Model-X");
    // Access via FourWheeler branch

    Bike bike("Bike", "Petrol", 120.0, 85000, 5, "Yamaha", "Steel");

    return 0;
}