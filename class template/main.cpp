
#include <iostream>

using namespace std;
template<class t1=float,int Size=6 >//non temp type argument//default argument with class temp
class sample{
    t1 arr[Size];

public:
    void getdata(){
    for (int i=0;i<Size;i++){

        cout<<"Enter values:"<<endl;
        cin>>arr[i];
    }

    }
  void showdata(){
      cout<<"values are:"<<endl;
    for (int i=0;i<Size;i++){


        cout<<arr[i]<<endl;
    }
  }
};
int main()
{
    sample<int,4>obj;
    obj.getdata();
    obj.showdata();
               sample<char,4>obj1;
               obj1.getdata();
               obj1.showdata();
    sample<>obj2;
    obj2.getdata();
    obj2.showdata();
    return 0;
}
