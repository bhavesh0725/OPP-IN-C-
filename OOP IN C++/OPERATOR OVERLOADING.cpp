#include <iostream>
using namespace std;

class hero {
public:
int age;
string name;
int a;

public:

void operator + (hero &h2){ //it accepts only one argument
  int value1= this->a; // first object a
  int value2= h2.a; // second object a  
  
  cout<< value2 - value1 <<endl;
}



};


int main() {
  hero h1;
  hero h2;
  h1.a=7;
  h2.a=8;
  h2 + h1;
  
}
