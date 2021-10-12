#include <iostream>

using namespace std;
template<class t>
class sample{
t a,b;
public:
    sample(t a,t b):a(a),b(b){}
    t getmax(){
    return(a>b?a:b);
    }
    };
int main()
{
   sample <int>obj1(10,20);
   sample <char>obj3('a','b');
   sample <float>obj2(10.99,20.99);
   cout<<obj1.getmax()<<endl;
   cout<<obj2.getmax()<<endl;
   cout<<obj3.getmax()<<endl;
    return 0;
}
