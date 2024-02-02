#include <iostream>
using namespace std;

class hero {
public:
int age;
static string name;  ////declaration


// private:
// int password;

public:

static string getname();   //declaration



hero(){
  cout<<"Default constructor is called."<<endl;
}

~hero(){
  cout<<"Default destructor is called."<<endl;
}



};
string hero :: name=  "Rohit"; //define outside the class
string hero :: getname(){  ///define outside the class
  return name;
}

int main() {
  std::cout << "Hello World!\n";
  cout<<hero::name<<endl;  //call
  cout<<hero::getname()<<endl;   //call

}
