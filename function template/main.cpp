#include <iostream>

using namespace std;
template<class x,class y> y maxm(x a,y b){
return(a>b?a:b);
}

int main()
{
    cout<<maxm(10,20)<<endl;
    cout<<maxm(10,20.99)<<endl;
     cout<<maxm(10.99,20.99)<<endl;
     cout<<maxm('a','b')<<endl;
     cout<<maxm('a',120)<<endl;
    return 0;
}
