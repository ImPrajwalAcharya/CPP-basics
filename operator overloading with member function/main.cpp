#include <iostream>

using namespace std;
class person
{
int rupee,paisa;
public:
    person(int a=0,int h=0){//parameterized constructor with default argument
    rupee=a;
    paisa=h;
    }
    void display()
    {
    cout<<"We have total rs : "<<rupee<<" and "<<paisa<<" paisa"<<endl;
}
 friend person operator+(person ,person  );
 friend void operator++(person&);
 friend void operator++(person&, int);
};
person operator+(person t1,person t2)
{//friend function//non member function
person temp;
temp.rupee=t1.rupee+t2.rupee;
temp.paisa=t1.paisa+t2.paisa;
return temp;
}
void operator++(person &t)
{//pass by refrence compo
++t.rupee;
++t.paisa;
}
void operator++(person &t, int)
{//post int necessary as a dommy
t.rupee++;
t.paisa++;
}
int main()
{
person p1(100,30),p2(200,30),p3;
++p1;
p2++;
p3=p1+p2;
p3.display();
return 0;
}
