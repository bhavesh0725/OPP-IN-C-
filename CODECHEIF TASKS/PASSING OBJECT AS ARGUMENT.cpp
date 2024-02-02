#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {}
};

// Function to modify a Person object by passing it by value
void modifyByValue(Person p) {
    p.name = "Modified";
    p.age += 1;
}

// Function to modify a Person object by passing it by reference
void modifyByReference(Person &p) {
    p.name = "Modified";
    p.age += 1;
}

int main() {
    // Creating a Person object
    Person person("John", 25);

    // Passing the object by value to the function
    modifyByValue(person);

    // Printing the original object to show that it remains unchanged
    std::cout << "After passing by value - Original Person: " << person.name << ", Age: " << person.age << std::endl;

    // Passing the object by reference to the function
    modifyByReference(person);

    // Printing the object after passing by reference to show the modifications
    std::cout << "After passing by reference - Modified Person: " << person.name << ", Age: " << person.age << std::endl;

    return 0;
}


After passing by value - Original Person: John, Age: 25
After passing by reference - Modified Person: Modified, Age: 26

