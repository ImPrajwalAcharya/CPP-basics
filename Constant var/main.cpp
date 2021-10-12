#include <iostream>

using namespace std;
class sample{
private:
 int x;
public:
    sample(int a){
    x=a;}
    int getdata()const{
       // x=20;
    return x;
    }
};
int main(){

    sample s1(10);
 cout<<s1.getdata();
    return 0;
}
