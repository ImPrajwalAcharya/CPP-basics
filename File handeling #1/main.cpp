//Write a program  to write the  Information of 10 employee  in
//a file. And  also display their  details  in console
#include <iostream>
#include<fstream>
using namespace std;


class employee{
char name[20];
int empid,age;
public:
    employee(){
    empid=0;
    age=0;
    }
    void readdata(){
    cout<<"Enter the name of Employee"<<endl;
cin>>name;
cout<<"Enter the id of Employee"<<endl;
cin>>empid;
    cout<<"Enter the age of Employee"<<endl;
cin>>age;

 }
 void showdata(){

    cout<<" the name of Employee is: "<<name<<endl;
cout<<"the id of Employeeis: "<<empid<<endl;
cout<<" the nage of Employee is :"<<age<<endl;
}
};
void writingfile(){
employee obj;
obj.readdata();
ofstream writeinfile("employee.txt",ios::app);
writeinfile.write(reinterpret_cast<char*>(&obj),sizeof(obj));
writeinfile.close();
}



void readingfile(){
employee obj;
ifstream readfromfile("employee.txt",ios::in);

while(!readfromfile.eof()){
       readfromfile.read(reinterpret_cast<char*>(&obj),sizeof(obj));
if (sizeof(obj)>0){
    obj.showdata();}
}
readfromfile.close();
}
int main()
{employee obj;


writingfile();
             readingfile();




    return 0;
}
