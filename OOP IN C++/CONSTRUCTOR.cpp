#include <iostream>
using namespace std;

class hero {

private:
  int health;
  char rank;
  string name;

public:
  hero() { // constructor user defined without parameter
    cout << "constructor called" << endl;
  }

  hero(int health, char rank) {
    // parameterized constructor user defined with parameter
    cout << "this -> " << this << endl;
    this->health = health;
    this->rank = rank;
  }

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
  // string name;
  // int health;
  // char rank;

  // static allocation
  hero obj1;
  cout << "Constructor called by static allocation of object" << endl;

  // dynamic allocation
  hero *h1 = new hero();
  cout << "Constructor called by dynamic allocation of object" << endl;
  cout << "***********************************************" << endl;
  hero obj2(100, 'A'); // parametrized constructor called
  cout << "The address of obj2 : " << &obj2 << endl;
  cout << "The health of the hero is " << obj2.getHealth() << endl;
  cout << "The rank of the hero is " << obj2.getRank() << endl;

  cout << "************************************************" << endl;

  hero *h2 = new hero(200, 'B');
  cout << "The address of h2 is : " << h2
       << endl; // dont write &h2 as it means the address of pointer and not
                // address of abject , so to access the address of object we
                // need to write only h2.
  cout << "The health of the hero is " << h2->getHealth() << endl;
  cout << "The rank of the hero is " << h2->getRank() << endl;
}

// In your code, you are observing that the address of `h2` (a dynamically
// allocated `hero` object) and the `this` pointer within the `hero` class for
// the `obj2` (a statically allocated `hero` object) are different. This is
// expected behavior.

// 1. **Static Allocation (obj2):** When you create an object using static
// allocation, like `hero obj2;`, the object is allocated on the stack. The
// `this` pointer inside member functions will point to the address of that
// specific object, which in this case is `obj2`. The address of `obj2` will be
// the same as the `this` pointer for the member functions of `obj2`.

// 2. **Dynamic Allocation (h2):** When you create an object using dynamic
// allocation, like `hero *h2 = new hero();`, the object is allocated on the
// heap, and `h2` is a pointer to the heap-allocated object. The `this` pointer
// inside member functions of that object will point to the address of the
// heap-allocated object. It will not be the same as the address of `h2` because
// `h2` is a pointer to the object, not the object itself. The address of `h2`
// is the address of the pointer, which is separate from the address of the
// object it points to.

// In your code:

// ```cpp
// cout << "The address of obj2 : " << &obj2 << endl;
// cout << "The address of h2 is : " << &h2 << endl;
// ```

// The first line prints the address of `obj2`, and the second line prints the
// address of the pointer `h2`. They are expected to be different because `obj2`
// is the object itself, and `h2` is a pointer to the object. The `this` pointer
// inside the member functions of the objects (`obj2` and the one pointed to by
// `h2`) will point to their respective object's memory location.

// To access the address of the object pointed to by a pointer, you can use the
// pointer itself. In your code, you already have a pointer `h2`, and you can
// use this pointer to access the object's address. Here's how you can do it:

// ```cpp
// cout << "The address of h2 is : " << h2 << endl;
// ```

// This line will print the address of the object that `h2` is pointing to. The
// `h2` pointer directly holds the address of the dynamically allocated `hero`
// object.