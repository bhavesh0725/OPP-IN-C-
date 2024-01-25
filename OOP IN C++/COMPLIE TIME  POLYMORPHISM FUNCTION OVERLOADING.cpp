#include <iostream>
#include<bits/stdc++.h>
using namespace std;




// When there are multiple functionsin a class with the same name but different parameters, these functions are overloaded. The main advantage of function overloading is it increases the readability of the program. Functions can be overloaded by using different numbers of arguments and by using different types of arguments.




// i) Function overloading with different numbers of arguments: In this example, we have created two functions, the first add() performs the addition of the two numbers, and the second add() performs the addition of the three numbers. Let’s look at the example:

class A{
  public:
  int add(int a, int b){
    cout<<"Integer typed function is called"<<endl;
    return a+b;
    
  }

  int add(int a, int b, int c){
    return a+b+c;
  }


  double add(double a, double b){
    cout<<"Double typed function is called"<<endl;
    return a+b;
  }

  int add(int a, int b, int c, int d){
    cout<<"Default type arguments is called if not assigned"<<endl;
    return a+b+c+d;
  }
};

int main(){
  A obj1;
  cout<<obj1.add(2,3)<<endl;// two parameter
  cout<<obj1.add(1,2,3)<<endl;// three parameter i) Function overloading with different numbers of arguments:
  cout<<obj1.add(1.5,2.0)<<endl;//double data type      ii) Function overloading with different types of arguments:




  
// comment line 17 -25,41 for this execution
  cout<<obj1.add(100,200)<<endl;// default type arguments
  cout<<obj1.add(100,200,300,400)<<endl; //default type arguments
// iii) Default Arguments:A default argument is a value providedin a function declaration automatically assigned by the compiler if the function’s caller doesn’t provide a value for 2the argument with a default value. However, if arguments are passed while calling the function, the default arguments are ignored.
}