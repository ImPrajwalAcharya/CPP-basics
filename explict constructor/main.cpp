#include <iostream>

using namespace std;
class sample{
int x;
public:
    sample(){
    x=0;
    }
    explicit sample(int a){
    x=a;
    }
    void showdata(){
    cout<<"x: "<<x<<endl;
    }
};
void fun(sample s){
s. showdata();
}
int main()
{
    sample s1(4);
    sample s2=5;
    sample s3;
    s3=6;
    s1.showdata();
    s2.showdata();
    s3.showdata();
    fun(20);
    return 0;
}
