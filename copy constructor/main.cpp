#include <iostream>

using namespace std;
class cons{
private:
int x,y,z;
public:
    cons(){

    cout<<"i am from default constructor :";}
    cons(int a,int b,int c){
    cout<<"the sum is from parameterized constructor:"<<a+b+c<<endl ;
    x=a;
    y=b;
    z=c;
    }
    cons(cons &c){

    cout<<"i am from copy constructor :"<< c.x+c.y<<endl;

    }
    ~cons(){
    cout<<"destructor called"<<endl;}
};

int main()
{
    cons c1(1,2,3);
cons c2(c1);
    return 0;
}
