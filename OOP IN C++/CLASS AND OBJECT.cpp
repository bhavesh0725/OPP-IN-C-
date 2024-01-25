#include <iostream>
using namespace std;
class hero {
  // properties
public:
  int health;
  char rank;
  string name;

  void print() {
    cout << "The name  of hero is :" << name << endl;
    cout << "The health of " << name << " is :" << health << endl;
    cout << "The rank of " << name << " is :" << rank << endl;
  }
};

int main() {
  hero h1;
  cout << "Enter the name of hero: ";
  cin >> h1.name;
  cout << "Enter the health of " << h1.name << ": ";
  cin >> h1.health;
  cout << "Enter the rank of " << h1.name << ": ";
  cin >> h1.rank;

  h1.print();
}