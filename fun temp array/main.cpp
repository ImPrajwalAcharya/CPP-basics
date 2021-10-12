#include <iostream>
using namespace std;
template<class arr>
 void sortt(arr a[10],int n){
    arr c;
    for (int i=0;i<n;i++){
       for(int j=i+1;j<n;j++)
        if(a[i]>a[j]){
               c =a[i];
            a[i]=a[j];
            a[j]=c;
        }
    }

}
int main()
{float a[6]={2.3,4.5,6.6,6.4,8.0,1.5};
   int b[6]={1,2,5,8,7,6};
  sortt(b,6);

for (int k=0;k<6;k++){
        cout<<"Shorted values are"<<endl;
        cout<<b[k]<<endl;
    }
    return 0;
}
