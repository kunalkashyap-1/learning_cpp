 #include<bits/stdc++.h>
 using namespace std;
 
 class A{
     int a;
     public:
     void setData(int a){
        this->a=a;
      //  return *this;
     }
     void getData(){
         cout<<"the value of a is "<<a<<endl;
     }
 };



 int main(){
     //this is a keyword which is a pointer which points to the objects which invokes the member function
     A a;
     a.setData(4);
     a.getData();
 return (0);
 }