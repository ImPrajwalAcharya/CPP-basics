#include <iostream>
#include<cstring>
using namespace std;
class sample{
char n[20];
public:
void read(){
    cout<<"Enter String "<<endl;
    cin>>n;
    }
void display(){
cout<<n<<endl;
}
sample operator +(sample t1){
sample t2;
strcpy(t2.n,n);
strcat(t2.n," ");
strcat(t2.n,t1.n);
return t2;
}
};


int main()
{ sample s1,s2,s3;
s1.read();
s2.read();
s3=s1+s2;
s3.display();

    return 0;
}
