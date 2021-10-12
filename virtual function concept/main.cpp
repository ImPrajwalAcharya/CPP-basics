//EARLY BINDING
#include <iostream>

using namespace std;
class animal{
public:
 void display(){
    cout<<"i am from animal class"<<endl;
    }
};
 class human :public animal{
 public:
void display(){
    cout<<"i am from human class"<<endl;
    }
};
class cat :public human{
 public:
virtual void display(){
    cout<<"i am from cat class"<<endl;
    }
};
int main()
{
    human *objptr;
    cat obj2;
  objptr=&obj2; //base class pointer can
  //point to the obj of any of its descendent class
  objptr->display();//compiler unknown about objptr content
    return 0;
}
