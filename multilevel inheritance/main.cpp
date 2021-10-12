#include <iostream>

using namespace std;
class grandfather{
protected:
    int a;
public:
    void setdata1(){
    cout<<"enter value of a: "<<endl;
    cin>>a;}
};
class father:public grandfather{
protected:
    int b;
public:
     void setdata2(){
    cout<<"enter value of b: "<<endl;
    cin>>b;}
     void add1(){
    cout<<"output from father : "<<a+b<<endl;
    }
};
class son:public father{
protected:
    int c;
public:
     void setdata3(){
    cout<<"enter value of c: "<<endl;
    cin>>c;}
    void add2(){
    cout<<"output from son : "<<a+b+c<<endl;
    }
};
int main()
{
son obj;
obj.setdata1();
obj.setdata2();
obj.setdata3();
obj.add1();
obj.add2();
    return 0;
}
