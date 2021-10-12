#include <iostream>
#include <fstream>
using namespace std;

int main()
{char name[20],name2[20];
int empid,age,empid2,age2;
 ofstream infile("employee3.txt",ios::app);
for (int i=0;i<1;i++){

 cout<<"Enter the name of Employee"<<endl;
cin>>name;
cout<<"Enter the id of Employee"<<endl;
cin>>empid;
    cout<<"Enter the age of Employee"<<endl;
cin>>age;
cin.ignore();
infile<<name;
infile.put('\t');
infile<<age;
infile.put('\t');
infile<<empid;
infile.put('\t');
}
infile.close();
ifstream output("employee3.txt",ios::in);
cout<<"\tNAME:"<<"\tAGE:"<<"\tEMPID:"<<endl;

while(!output.eof()){

output>>name2;
output>>age2;
output>>empid2;

cout<<"\t"<<name<<"\t"<<age<<"\t"<<empid<<endl;
}
output.close();
    return 0;
}
