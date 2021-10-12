#include <iostream>
using namespace std;
class sample{
public:
    sample(){
    cout<<"constructor"<<endl;}
 ~sample(){
    cout<<"desstructor"<<endl;}
};
int main()
{ sample *ptrobj;
 ptrobj=new sample;
 delete ptrobj;
 sample *ptrobj2=new sample[2];
 delete []ptrobj2;

 return 0;
 }
