#include <iostream>

using namespace std;
class shape{
public:
    void virtual draw(){
    cout<<"SHAPE"<<endl;
    }

};
class triangle:public shape{

public:
    void draw(){
    cout<<"TRIANGLE"<<endl;
    }

};
class rectangle:public shape{

public:
    void draw(){
    cout<<"RECTANGLE"<<endl;
    }

};
class circle:public shape{
public:
    void draw(){
    cout<<"CIRCLE"<<endl;
    }


};
int main()
{
   triangle t;
   rectangle r;
   circle c;
   shape s;
    shape *sobjptr[]={&s,&t,&r,&c};
    for (int i=0;i<4;i++){
    sobjptr[i]->draw();}
    return 0;
}
