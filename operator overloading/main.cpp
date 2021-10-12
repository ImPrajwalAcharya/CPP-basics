#include <iostream>

using namespace std;
class person{
int rupee,paisa;
public:
    person(int a=0,int h=0){//parameterized constructor with default argument
    rupee=a;
    paisa=h;
    }
    void display(){
    cout<<"We have total rs : "<<rupee<<" and "<<paisa<<" paisa"<<endl;

    }
  person operator+(person p){//binary operator overloading
      person temp;

    temp.rupee=rupee+p.rupee;
    temp.paisa=paisa+p.paisa;
    return temp;
    }
    person operator++(){//unary operator overloading
   person temp;
    temp.rupee=++rupee; //pre
   temp.paisa=++paisa;
   return temp;

    }
     void operator++(int){//unary operator overloading
    rupee++;  //post
   paisa++;

    }
};

int main()
{
person p1(100,30),p2(200,30),p3;
p2=++p1;
p2++;
p3=p1+p2;
p3.display();
return 0;
}
