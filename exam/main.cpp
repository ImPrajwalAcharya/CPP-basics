#include <iostream>

using namespace std;
class time{

private:
    int h,m,s;
public:
        time(){
        h=0;
        m=0;
        s=0;
        }
        void getvalue(){
        cout<<"enter the time";
        cin>>h>>m>>s;
        }
        void showvalue(){
        cout<<"The result is"<<h<<m<<s;}
    time add(time t2){
        time result;
        result.h=h+t2.h;
        result.m=m+t2.m;
        result.s=s+t2.s;
        return result;
    }
        };
int main()
{
    time c1,c2,c3;
c1.getvalue();
c2.getvalue();
c3=c1.add(c2);
c3.showvalue();
    return 0;
}
