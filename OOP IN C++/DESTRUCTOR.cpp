#include <iostream>
using namespace std;

class hero {
public:
int age;
string name;


// private:
// int password;

public:

hero(){
  cout<<"Default constructor is called."<<endl;
}

~hero(){
  cout<<"Default destructor is called."<<endl;
}



};


int main() {
  std::cout << "Hello World!\n";
  hero h1;
  cout<<"Static object created"<<endl;

  hero *h2 = new hero();
  h2->age=25;
  h2->name="Ram";
  cout<<h2->age<<endl;
  cout<<h2->name<<endl;
  delete  h2;

}
