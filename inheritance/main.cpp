#include <iostream>

using namespace std;
class parent{
private:
    int x;
protected:
    int y;
public:
    int z;

};
class child:public parent{
public:
void display(){
cout<<y;
};

};
int main()
{child obj;

   obj.display();
    return 0;
}
