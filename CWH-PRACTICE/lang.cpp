#include<iostream>
using namespace std;
class config{
    const static string language;
    public:
    string name;
    string chlang;
    config(){

    }
    config(string name,string chlang){
        this->chlang=chlang;
        this->name=name;
    }
    config(config &ptr){
        this->chlang=ptr.chlang;
        this->name=ptr.name;
    }
    void setdata(void);
    void getdata(void);

};
const string config::language="English";
void config::setdata(){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter language: ";
    cin>>chlang;
    if(chlang.length()==0|| chlang=="No") chlang=language;
}
void config::getdata(){
    if(chlang.length()==0 || chlang=="No") chlang=language;
    cout<<"Name: "<<name<<endl;
    cout<<"Language: "<<chlang<<endl;
}
int main(){
config c1,c2,c3,c4;
c1.setdata();
c2.setdata();
c1.getdata();
c2.getdata();
c3=config(c2);
c2.getdata();
c4=config("unknown","");
c4.getdata();
config *pt=new config("ESHAAN","");
pt->getdata();
}