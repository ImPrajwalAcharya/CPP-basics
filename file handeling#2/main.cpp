#include <iostream>
#include <fstream>
using namespace std;

int main()
{char name[20];
int empid,age;
 ofstream infile("employee2.txt",ios::app);
for (int i=0;i<0;i++){

 cout<<"Enter the name of Employee"<<endl;
cin>>name;
cout<<"Enter the id of Employee"<<endl;
cin>>empid;
    cout<<"Enter the age of Employee"<<endl;
cin>>age;
cin.ignore();
infile.write(reinterpret_cast<char*>(name),sizeof(name));
infile.write(reinterpret_cast<char*>(&age),sizeof(age));
infile.write(reinterpret_cast<char*>(&empid),sizeof(empid));

}
infile.close();
ifstream output("employee2.txt",ios::in);
cout<<"\tNAME:"<<"\tAGE:"<<"\tEMPID:"<<endl;
while(!output.eof()){
output.read(reinterpret_cast<char*>(name),sizeof(name));
output.read(reinterpret_cast<char*>(&age),sizeof(age));
output.read(reinterpret_cast<char*>(&empid),sizeof(empid));
cout<<"\t"<<name<<"\t"<<age<<"\t"<<empid<<endl;
}
output.close();
    return 0;
}
