#include <iostream>

using namespace std;
class animal{
public:
    void walk(){
    cout<<"Walks with four legs";}
};
class human:public animal{
public:
    void walk(){
    cout<<"Walks with two legs";}
};
int main()
{
   human obj;
   obj.animal::walk();
    return 0;
}
