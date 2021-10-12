#include <iostream>

using namespace std;
class animal{
public:
   virtual void display(){
    cout<<"i am animal"<<endl;
    }
};
class cat:public animal{
public:
     void display(){
    cout<<"i am cat"<<endl;
    }
};
int main()
{animal *ptr;
   cat obj;
   ptr=&obj;
   ptr->display();
    return 0;
}
