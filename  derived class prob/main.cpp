#include <iostream>

using namespace std;
class xy{
int a;
public:
     void getdata(){
    cout<<"enter the values of a: "<<endl;
    cin>>a;
    }
};
class x:public virtual xy{
int b;
public:
     void get_data(){
    cout<<"enter the values of b: "<<endl;
    cin>>b;
    }
};
class y:public virtual xy{
int c;
public:
     void get__data(){
    cout<<"enter the values of c: "<<endl;
    cin>>c;
    }
};
class combo:public x,public y{
int d;
public:
     void get___data(){
    cout<<"enter the values of d: "<<endl;
    cin>>d;
    }
    void add(){
    cout<<"addition is "<<a+b+c+d;
    }};
int main()
{
    combo obj;
    obj.getdata();
    obj.get_data();
    obj.get__data();
    obj.get___data();
    obj.add();
    return 0;
}
