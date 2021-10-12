#include <iostream>

using namespace std;
class sample;
class test{
int a,b;
public:
    test(){
    a=0;
    b=0;
    }

   void display(){
   cout<<"value of a and b are "<<a<<" And "<<b;
   }
   void puta(int c){a=c;}
    void putb(int d){b=d;}
 

};
class sample{
int x,y;
public:
    sample(){
    x=0;
    y=0;
    }
    sample(int a,int b){
    x=a;
    y=b;
    }
    operator test(){
       test t;
   t.puta(x);
 t.putb(y);
   return t;
   }

 void display(){
   cout<<"value of x and y are "<<x<<" And "<<y;
   }
};
int main(){
sample s1(1,2);
test t1;
t1=s1;
t1.display();
s1.display();
    return 0;
}
