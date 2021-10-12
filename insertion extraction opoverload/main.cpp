#include <iostream>

using namespace std;
class sample{
int x;
public:
friend istream& operator >>(istream&,sample&);
friend ostream& operator <<(ostream&,sample&);
};
istream& operator >>(istream& input,sample& obj){
    input>>obj.x;
    return input;
}
ostream& operator <<(ostream& output,sample& obj){
output<<obj.x;
return output;
}
int main()
{sample s1;
    cout << "Enter the value" << endl;
    cin>>s1;
    cout<<s1;
    return 0;
}
