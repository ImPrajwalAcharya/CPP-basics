/* Title Goes Here */
#include<iostream>
using namespace std;
int main()
{
int n,i,*arr,total=0;
cout<<"total numbers you want to enter"<<endl;
cin>>n;
arr=new int[n];
for ( i = 0; i < n; i++)
{
cin>>arr[i];
total=total+arr[i];
}
int avg=total/n;
cout<<"total= "<<total<<" avg= "<<avg<<endl;
delete []arr;
    return 0;
}