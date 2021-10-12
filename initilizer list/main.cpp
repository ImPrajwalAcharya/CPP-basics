#include <iostream>

using namespace std;
class sample{
int x,y;
public:
    sample(int a,int b):x(a),y(b){
//    x=a;
//    y=b;
}
void display(){
cout<<"value of x is: "<<x<<" y is :"<<y<<endl;
}
};
int main()
{sample obj(1,2);
obj.display();

return 0;
}
