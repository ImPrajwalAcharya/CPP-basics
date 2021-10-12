#include <iostream>

using namespace std;
class shape{
protected:
    int base,height;
public:
    void setdata(){
    cout<<"Enter base and height"<<endl;
    cin>>base>>height;
    }
};
class triangle:public shape{
public:
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
