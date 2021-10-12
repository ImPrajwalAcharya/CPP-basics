 #include<iostream>
 int main(){
     using namespace std;
     float q;
     int num1=7;
     int num2=9;
     q=num1/num2;
     cout<<"Without casting : q="<<q<<endl; //displays 0 which is wrong result.
     q=static_cast<float>(num1)/num2;
     cout <<"After casting : q="<<q;  //right result
      return 0;
      }
