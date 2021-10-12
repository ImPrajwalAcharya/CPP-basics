#include <iostream>

using namespace std;
class sample{
private:
int x;
public:
    sample(int a){
    x=a;}
    int getdata() const{
    return x;
    }
};
int main(){

   const sample s1(10);
   sample s2(20);
 cout<<s1.getdata()<<endl;//constant caller object
                          // cannot call non constant function
 cout<<s2.getdata()<<endl;
    return 0;
}
