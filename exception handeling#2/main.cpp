#include <iostream>

using namespace std;
class day{};
class month{};
class year{};
class date{
int d,m,y;
public:
void read()throw(day,month){
cout<<"enter day: "<<endl;
cin>>d;
if(d>32){
throw day();}
cout<<"enter month: "<<endl;
cin>>m;
if(d>12){
throw month();}
cout<<"enter year: "<<endl;
cin>>y;
if(y<0){
throw year();
}
}
void show(){
cout<<d<<"/"<<m<<"/"<<y<<endl;
}

};
int main()
{
    date dobj;
    try{
    cout<<"Enter your data of birth"<<endl;
    dobj.read();
    dobj.show();
    }
    catch(day){
    cout<<"invalid day"<<endl;
    }
     catch(month){
    cout<<"invalid month"<<endl;
    }
     catch(year){
    cout<<"invalid year"<<endl;
    }
    return 0;
}
