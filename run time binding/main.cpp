
#include <iostream>

using namespace std;
class animal{
public:
    void  virtual display(){//virtual keyord conceptual program
    cout<<"i am from animal class"<<endl;
    }
};
 class human :public animal{
 public:
void display(){
    cout<<"i am from human class"<<endl;
    }
};
int main()
{
    animal *objptr;
    human obj;
  objptr=&obj; //base class pointer can
  //point to the obj of any of its descendent class
  objptr->display();
    return 0;
}
