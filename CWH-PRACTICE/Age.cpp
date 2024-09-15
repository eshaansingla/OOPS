#include<iostream>
using namespace std;
class DOB{
    public:
    int day;
    int month;
    int year;
    DOB(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void age() const;
};
void DOB::age() const{
    int umar=2024-year;
    if(month>9 || (day>15 && month==9)) umar--;
    cout<<"आपकी उम्र है:"<<umar<<" years."<<endl;
}
int main(){
DOB pers(28,7,2005);
pers.age();
DOB pers1(29,11,1980);
pers1.age();
DOB pers2(6,1,1976);
pers2.age();
DOB pers3(12,5,1952);
pers3.age();
}