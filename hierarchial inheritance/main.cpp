#include <iostream>

using namespace std;
class person{
    protected:
int age;
    public:
        void getdata(){
        cout<<"enter the age : "<<endl;
        cin>>age;
        }
};
class student:public person{
public:
    void ages(){
    cout<<"age of student is: "<<age<<endl;
    }

};
class teacher:public person{
    public:
    void ages(){
    cout<<"age of Teacher is: "<<age<<endl;
    }

};
int main()
{
    teacher obj1;
    student obj2;
    cout<<"For Student"<<endl;
    obj2.getdata();
    obj2.ages();
    cout<<"For Teacher"<<endl;
     obj1.getdata();
    obj1.ages();
    return 0;
}
