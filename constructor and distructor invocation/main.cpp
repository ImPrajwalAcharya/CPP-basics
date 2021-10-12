#include <iostream>

using namespace std;
class shape{
protected:
    int base,height;
public:
    shape(){
    cout<<"i am from shape constructor "<<endl;
    }

     ~shape(){
    cout<<"i am from shape dectructor "<<endl;
    }
    void setdata(){
    cout<<"Enter base and height"<<endl;
    cin>>base>>height;
    }
};
class triangle:public shape{
public:
    triangle(){
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
triangle obj;
obj.setdata();
obj.area();
    return 0;
}
