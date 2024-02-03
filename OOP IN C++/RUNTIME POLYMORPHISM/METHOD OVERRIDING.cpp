// SAME METHOD NAME
// SAME PARAMETER
// INHERITENCE



#include <iostream>
using namespace std;

class hero {
public:
  int age;
  string name;
  int a;

public:
  void action() { cout << "Hero's action"<<endl; }
};



class villan : public  hero {
public:
  void action() { cout << "Villan's action"<<endl; }
};



int main() {

  hero ram;
  villan ravan;
  ram.action();
  ravan.action();
    
}
