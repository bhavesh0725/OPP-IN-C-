#include <iostream>
using namespace std;

class hero {
private:
  int health;
  char rank;
  string name;

public:
  void setHealth(int value) {
    health = value; // Accessing a private member within the class
  }
  void setRank(char ch) {
    rank = ch; // Accessing a private member within the class
  }

  void setName(string name1) {
    name = name1; // Accessing a private member within the class
  }

  int getHealth() {
    return health; // Accessing a private member within the class
  }

  char getRank() {
    return rank; // Accessing a private member within the class
  }

  string getName() {
    return name; // Accessing a private member within the class
  }
};

int main() {
  string name;
  int health;
  char rank;
  // static object creation in stack

  hero obj1;
  cout << "I have created static object successfully for this hero" << endl
       << endl;
  cout << "Enter the name of the hero: " << endl;
  cin >> name;
  obj1.setName(name);

  cout << "Enter the health of the hero: " << endl;
  cin >> health;

  obj1.setHealth(health);

  cout << "Enter the rank of the hero: " << endl;
  cin >> rank;

  obj1.setRank(rank);

  cout << "The name of the hero is: " << obj1.getName() << endl;

  cout << "The health of the hero is : " << obj1.getHealth() << endl;

  cout << "The rank of the hero is: " << obj1.getRank() << endl;
  cout << "*********************************************" << endl;

  // dynamic object creation
  // this creates the object in the heap
  hero *h1 = new hero();
  cout << "I have created dynamic object  successfully for this hero" << endl
       << endl;

  cout << "Enter the name of the hero: " << endl;
  cin >> name;
  h1->setName(name); // accessing the public member of the class using pointer,
                     // here we will not use h1.setName(name)
  // because h1 is pointer here
  cout << "Enter the health of the hero: " << endl;
  cin >> health;

  (*h1).setHealth(health); // this is also another way for accessing the public
                           // member of the class by defrencing it.

  // you can use either of the two ways for accessing the data members

  cout << "Enter the rank of the hero: " << endl;
  cin >> rank;

  h1->setRank(rank);

  cout << "The name of the hero is: " << h1->getName() << endl;

  cout << "The health of the hero is : " << h1->getHealth() << endl;

  cout << "The rank of the hero is: " << h1->getRank() << endl;
}
