#include <iostream>

using namespace std;
class father{
protected:
    int a;
public:
    void get_data(){
    cout<<"enter the values of a: "<<endl;
    cin>>a;
    }
};
class mother{
protected:
    int b;
public:
 void getdata(){
    cout<<"enter the values of b: "<<endl;
    cin>>b;
}};
class child:public father,public mother{
protected:
    int c;
public:
    void get__data(){
    cout<<"enter the values of c: "<<endl;
    cin>>c;
}
    void add(){
    cout<<"sum="<<a+b+c<<endl;
    }
};
int main()
{
    child obj;
    obj.get_data();
    obj.getdata();
    obj.get__data();
    obj.add();
    return 0;
}
