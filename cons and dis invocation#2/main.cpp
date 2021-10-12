#include <iostream>

using namespace std;
class shape{
protected:
    int base,height;
public:
    shape(int a,int b){
        base=a;
        height=b;
    cout<<"i am from shape constructor "<<endl;
    }
    shape(){
    }

     ~shape(){
    cout<<"i am from shape dectructor "<<endl;
    }
//    void setdata(){
//    cout<<"Enter base and height"<<endl;
//    cin>>base>>height;
//    }
};
class triangle:public shape{
public:
    triangle(int a,int b):shape(a,b){
    cout<<"i am from traingle constructor"<<endl;
    }

     ~triangle(){
    cout<<"i am from traingle destructor"<<endl;
    }
  void area(){
    cout<<"Area is:"<<((base*height)/2);
    }
};
int main()
{
triangle obj(2,3);

//obj.setdata();
obj.area();
    return 0;
}
