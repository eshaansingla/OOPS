#include<iostream>
using namespace std;
class TC{
private:
float degC;
public:
void give();
void setval(float);
};
class TF{
public:
float degF;
void setval();
void give();
friend void convert(TC &,TF &);
};
void convert(TC &C,TF &F){
    C.setval(((F.degF-32)/1.8));
}
void TF::setval(){
    cout<<"Enter in deg F:";
    cin>>degF;
}
void TC::setval(float ans){
    degC=ans;
}
void TF::give(){
     cout<<"Temp in deg F:"<<degF<<endl;
}
void TC::give(){
     cout<<"Temp in deg C:"<<degC<<endl;
}
int main(){
TC C1;
TF F1;
F1.setval();
F1.give();
convert(C1,F1);
C1.give();
}