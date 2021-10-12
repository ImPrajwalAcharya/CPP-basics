#include <iostream>
#include<cstring>
using namespace std;

int main(){
char str[10];

    cout << "Enter string" << endl;
    cin.read(str,10);

    cout<<str<<endl;
    cout.write(str,10);
    return 0;
}
