#include <iostream>

using namespace std;

int main()
{int a,b;
cout<<"enter numbers"<<endl;
cin>>a>>b;
try{
    if(b==0){
        throw b;
    }
cout<<"The division result is:"<<a/b;
}
catch(int ex){
    cout << "Cant perform operation" << endl;}
    return 0;
}
