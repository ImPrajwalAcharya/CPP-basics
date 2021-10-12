#include<iostream>
#include<fstream>
using namespace std;

class student
{
private:
char name [30], add [30], phone [20];
public:

void read_data()
{
cout<<"Enter name: ";
cin>>name;
cout<<"Enter address: ";
cin>>add;
cout<<"Enter phone number: ";
cin>>phone;
cout<<endl;
}
void  show_data(){
cout<<"Name: "<<name<<endl;
cout<<"Address: "<<add<<endl;
 cout<<"Phone number: "<<phone<<endl;}
void  write_rec ()
{
ofstream outfile ( "student.txt", ios::binary|ios::app); 
read_data(); 
outfile.write (reinterpret_cast<char*>(this),sizeof (*this));
}
void   readall_rec (){
ifstream infile ( "student.txt", ios::binary);
if (!infile){
cout<<"file not found: store record first"<<endl;
return;}
cout<<"\n***Data from file**"<<endl;
while (!infile.eof()){
    infile.read (reinterpret_cast<char*> (this), sizeof (*this));
show_data();}
}
void   readone_rec (){
int n;
ifstream infile ( "student.txt", ios::binary);
if (!infile){
cout<<"file not found: store record first"<<endl;
 return;}
infile.seekg (0, ios::end);
int count=infile.tellg() /sizeof (*this);
 cout<<"\nThere are "<<count<<" records in the file";
 cout<<"\nEnter Record Number: ";
cin>>n;
infile.seekg ((n-1)*sizeof (*this));
 infile.read (reinterpret_cast<char*> (this), sizeof (*this));
show_data();}
void  edit_rec(){
int n;
fstream iofile ( "student.txt", ios::in|ios::binary); 
if (!iofile){
cout<<"file not found: store record first"<<endl;
return;}
iofile.seekg (0, ios::end);
int count=iofile.tellg () /sizeof (*this); 
cout<<"\nThere are "<<count<<" records in the file"; 
cout<<"\nEnter Record Number to be edited: ";
cin>>n;
iofile.seekg ((n-1)*sizeof (*this));
iofile.read (reinterpret_cast<char*> (this), sizeof (*this)); 
cout<<"Record "<<n<<" has following data"<<endl;
show_data(); 
iofile.close();
iofile.open ( "student.txt", ios::out|ios::in|ios::binary); 
cout<<"Enter data to modify"<<endl;
read_data();
iofile.write (reinterpret_cast<char*> (this), sizeof (*this));
}
void  delete_rec (){
int n;
char tempfile []="temp.dat";
 ifstream infile ( "student.txt", ios::binary); 
 if (!infile){
cout<<"file not found: store record first"<<endl;
return;}
infile.seekg (0, ios::end);
 int count=infile.tellg() /sizeof (*this);
cout<<"\nThere are "<<count<<" records in the file";
 cout<<"\nEnter Record Number to be deleted: ";
cin>>n;
fstream tmpfile (tempfile, ios::out | ios::binary); 
infile.seekg (0) ;
for (int i = 0 ; i<count; ++i){
infile.read (reinterpret_cast<char*> (this),sizeof(*this));
if (i==(n-1)) 
continue;
tmpfile.write (reinterpret_cast<char*> (this),sizeof (*this));}
infile.close();
ofstream outfile ( "student.txt", ios::binary); 
tmpfile.close();
 tmpfile.open(tempfile, ios::in|ios::binary);
for (int i=0; i<count-1; ++i){
tmpfile.read (reinterpret_cast<char*> (this) ,sizeof (*this));
 outfile.write (reinterpret_cast<char*> (this) ,sizeof (*this));
} tmpfile.close();
 remove (tempfile);
}
};
int main(){
student stu;
int choice;
cout<<"**Student Record System**";
while (true){
cout<<"\nSelect one option below";
 cout<<"\n\t1-->Write Records to file";
cout<<"\n\t2-->Show All Records From File";
 cout<<"\n\t3-->Show One Record";
cout<<"\n\t4-->Edit a Record";
cout<<"\n\t5-->Delete a Record";
cout<<"\n\t6-->Exit From Program";
 cout<<"\nEnter your choice:"; 
 cin>>choice; 
switch (choice){
case 1:
stu.write_rec (); break;
case 2:
stu.readall_rec();
break;
case 3:
stu.readone_rec ();
break;
case 4:
stu.edit_rec (); break;
case 5:
stu.delete_rec ();
break;
case 6:
exit(0);
break;
defalut:
cout<<"\nChoice not available";
exit(0);
}
}
return 0;
}
