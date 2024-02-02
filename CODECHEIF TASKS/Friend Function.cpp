// Friend Function
// In C++, a friend function is a function that is not a member of a class but is granted special access to the private and protected members of the class.
// It is often used to allow external functions or classes to operate on a class's private or protected data.
// Here are some key points to understand about friend functions:

// Declaration within a Class: A friend function is declared within the class in which it needs access to the private or protected members. However, it is not a member of the class itself.
// Access to Private Members: A friend function can access private and protected members of the class for which it is declared as a friend. This is not possible for regular non-member functions or external code.
// In the given code, friendFunction is declared as a friend of the MyClass class, which allows it to access and modify the privateVar member of MyClass.



#include <iostream>
using namespace std;

class MyClass {
private:
    int privateVar;

public:
    MyClass(int val) {
        privateVar = val;
    }

    // Declare a friend function
    friend void friendFunction(MyClass& obj);

    int getData(){
        return privateVar;
    }
};

// Define the friend function
void friendFunction(MyClass& obj) {
    // Access and modify the private member of MyClass
    obj.privateVar += 10;
}

int main() {
    MyClass obj(42);

    // Call the friend function to modify the private member
    friendFunction(obj);

    // Access the modified private member
    cout << "Modified privateVar: " << obj.getData() << endl;

    return 0;
}
