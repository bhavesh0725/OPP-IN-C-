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
  h1.age=21;
  h1.name="sham";
  cout<<"Name is "<<h1.name<<endl;
  cout<<"Age is "<< h1.age<<endl;

  hero *h2 = new hero();
  h2->age=25;
  h2->name="Ram";
  cout<<"Name is "<<h2->name<<endl;
  cout<<"Age is "<< h2->age<<endl;

  h1=*h2;//only content is copy, both the addresses are different

  cout<<"Name is "<<h1.name<<endl;
  cout<<"Age is "<< h1.age<<endl;
  cout<<"Name is "<<h2->name<<endl;
  cout<<"Age is "<< h2->age<<endl;

  cout<<"address of h1 is "<<&h1<<endl;
  cout<<"address of h2 is "<<h2<<endl;
  delete  h2;

}
