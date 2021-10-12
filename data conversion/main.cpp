#include <iostream>

using namespace std;
 class sample {
     int x;
 public:
     sample(){
     x=100;
     }
     sample(int a){
     x=a;
     cout<<"\nfor basic to UD type";
     }
    void display(){
    cout<<"\n value of x is "<<x;}

operator int(){
cout<<"\n uD to basic:";
return x+20;
}

 };
 class test{
     int y=5;
 public:
     void display(){
    cout<<"\n"<<y;}
operator sample(){

return sample(y);
}

 };
int main(){
    float b=10.1;
    int a;
sample s1;
test t1;
a=b;//basic to basic
s1=a;//basic type to user defined type
s1.display();
a=s1;//user defined type to basic type
cout<<"\n"<<a;
s1=t1;//UD type to UD type
s1.display();
//t1.display();
    return 0;
}
