#include <iostream>

using namespace std;
class father{
protected:
    int a;
public:
    father(int x){
        a=x;
    cout<<"cons called of father "<<endl;
    }
    ~father(){
    cout<<"dis father"<<endl;
    }
};
class mother{
protected:
    int b;
public:
    mother(int x){
        b=x;
    cout<<"cons called of mother "<<endl;
    }
      ~mother(){
    cout<<"dis mother"<<endl;
    }
 };
class child:public father,public mother{
protected:
    int c;
public:
    child(int c,int d):father(c),mother(d){
cout<<"cons child called"<<endl;
    }
      ~child(){
    cout<<"dis child"<<endl;
    }

    void add(){
    cout<<"sum="<<a+b<<endl;
    }
};
int main()
{
    child obj(5,6);
    obj.add();
    return 0;
}
