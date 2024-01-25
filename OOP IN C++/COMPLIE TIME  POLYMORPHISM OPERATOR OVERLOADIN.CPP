#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
  public:
  int a, b;

  void operator+ (A &obj2){
    int value1 = this->a;
    int value2 = obj2.a;
    cout<<"Output: "<<value2 - value1<<endl;
  }

    void operator() (){
      cout<<"Bracket overloaded successfully by calling object "<<this->a<<endl;
    }
  
};
int main() {
    A obj1, obj2;
    obj1.a = 4;
    obj2.a = 5;
    obj1 + obj2;
    cout<<"Thus I successfully completed operator overloading in C++"<<endl;

    obj1 ();
    obj2 ();
    return 0;
  

  



  
    return 0;


  
}//The operator+ function is called with obj1 as this and obj2 as the A &obj argument.

// Inside the operator+ function, this refers to obj1, and obj refers to obj2. You can think of this as a pointer to the object on which the operator is called, and obj is the object passed as an argument.