#include <iostream>
#include<math.h>
using namespace std;
template<class base>
base power(base b,int e){

if (e<0){
    e=e*-1;
}
return (pow(b,e));

}
int main()
{
    int a,b;
    cin>>a>>b;
cout<<power(a,b);
    return 0;
}
