#include <iostream>

using namespace std;
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
 void display(){
   cout<<"value of x and y are "<<x<<" And "<<y;
   }
int get_x(){
return x;
}
int get_y(){
return y;
}

};
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
   test (sample p){
   a=p.get_x();
   b=p.get_y();

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
