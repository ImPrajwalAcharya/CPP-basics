#include <iostream>

using namespace std;
float maxm(float a,float b){
    cout<<"from normal function"<<endl;
return(a>b?a:b);
}
template<class x> x maxm(x a,x b){
     cout<<"from function temp "<<endl;
return(a>b?a:b);
}

int main()
{
    cout<<maxm(10,20)<<endl;
     cout<<maxm(10.99,20.99)<<endl;


    return 0;
}
