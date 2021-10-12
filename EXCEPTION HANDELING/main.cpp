#include <iostream>
using namespace std;
int main()
{int a ,b,c;
    cout << "Enter value of a and b:" << endl;
    cin>>a>>b;
   try{
       if(b==0){
        throw b;}
       c=a/b;
    cout<<"value after division: "<<c<<endl;}
    catch(int e){
    cout<<"Caught Error since b is "<<e;
    }
    return 0;
}
