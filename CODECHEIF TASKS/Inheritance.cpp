Inheritance is a fundamental concept in object-oriented programming (OOP), including C++. It allows you to create a new class (called a subclass or derived class) based on an existing class (called a base class or parent class).

Base Class (Parent Class):
The base class is the class from which other classes inherit properties and behaviors.
It serves as the template or blueprint for creating derived classes.
Derived Class (Child Class or Subclass):
The derived class is a new class created by inheriting properties and behaviors from a base class.
It can add new attributes and methods in addition to those inherited from the base class.
Visibility of Inherited Members
-----------------------------------------------------------------------------------
|                       |                Derived class visibility                 |
|-----------------------|---------------------------------------------------------|
| Base class visibility |  Public         |   Private         |   Protected       |
|-----------------------|---------------------------------------------------------|
| Private               |  Not Inherited  |   Not Inherited   |   Not Inherited   |
| Protected             |  Protected      |   Private         |   Protected       |
| Public                |  Public         |   Private         |   Protected       |
-----------------------------------------------------------------------------------
C++ supports five types of inheritance:
Single inheritance
Multiple inheritance
Hierarchical inheritance
Multilevel inheritance
Hybrid inheritance


Certainly! Let's break down the table to understand the visibility of inherited members in a simpler way:

1. **Base Class Visibility:**
   - **Public:** All members (public, protected, and private) of the base class are inherited with the same access level in the derived class.
   - **Protected:** Only public and protected members of the base class are inherited with the same access level in the derived class. Private members are not inherited.
   - **Private:** No members of the base class are inherited regardless of their access level.

2. **Derived Class Visibility:**
   - **Public Inheritance:**
     - Public members of the base class become public in the derived class.
     - Protected members of the base class become protected in the derived class.
     - Private members of the base class are not directly accessible in the derived class.
   - **Private Inheritance:**
     - All members of the base class become private in the derived class.
     - Private members of the base class are not directly accessible in the derived class.
   - **Protected Inheritance:**
     - Protected and public members of the base class become protected in the derived class.
     - Private members of the base class are not directly accessible in the derived class.

3. **In Simple Terms:**
   - If a base class member is public, it retains its access level in the derived class.
   - If a base class member is protected, it becomes protected in the derived class.
   - If a base class member is private, it is not directly accessible in the derived class.

Remember that "access level" here refers to whether a member is public, protected, or private. This determines how members are visible and accessible within the class hierarchy.


Single Inheritance
In C++, single inheritance refers to a class inheriting from only one base class.

The given code is an example of single inheritance:

We have a base class Animal with two methods: Eat and Sleep. The Animal class has a constructor that takes the name of the animal as an argument.
We then define a derived class Dog that inherits from the Animal class using the public access specifier. This means that the public members of the Animal class are accessible in the Dog class.
The Dog class has an additional method Bark, which is specific to dogs.
In the main function, we create an instance of the Dog class named myDog and call methods from both the base class (Eat and Sleep) and the derived class (Bark) using the myDog object.
Run the code to review this concept.

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    string name;

    Animal(string name){
        this->name = name;
    }

    void Eat() {
        cout << name << " is eating." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // calling constructor of Animal with name as parameter
    Dog(string name) : Animal(name) {}

    void Bark() {
        cout << "Woof! Woof!" << endl;
    }
};

int main() {
    // Create an instance of the Dog class
    Dog myDog("Buddy");

    // Call methods from the base class
    myDog.Eat();

    // Call method from the derived class
    myDog.Bark();

    return 0;
}






Multilevel Inheritance
In C++, multilevel inheritance involves a chain of inheritance, where a derived class inherits from a base class, and then another class inherits from that derived class.

In this example, We will demonstrate multilevel inheritance with protected variables:

We have a base class Animal with a protected member name.
We then create an intermediate derived class Mammal that inherits from Animal and adds a protected member numLegs. This class represents a generic mammal.
Finally, we create the Dog class, which inherits from Mammal. Dog is a specific type of mammal, so it inherits both the name and numLegs members and adds its own method, Bark.
In the main function, we create an instance of the Dog class named myDog and call methods from all three levels of the inheritance hierarchy (Eat from Animal, Walk from Mammal, and Bark from Dog).
Protected members are accessible within the class that defines them and in derived classes, but they are not directly accessible from outside the class hierarchy.
This allows you to encapsulate data and behavior while still providing access within the inheritance hierarchy.

Run the code to understand this concept.

#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    Animal(string _name) : name(_name) {}

    void Eat() {
        cout << name << " is eating." << endl;
    }
};

// Intermediate derived class
class Mammal : public Animal {
protected:
    int numLegs;

public:
    Mammal(string _name, int _numLegs) : Animal(_name) // calling constructor of parent class
    {
        numLegs = _numLegs;
    }

    void Walk() {
        cout << name << " is walking on " << numLegs << " legs." << endl;
    }
};

// Final derived class inheriting from Mammal
class Dog : public Mammal {
public:
    Dog(string _name, int _numLegs) : Mammal(_name, _numLegs) {}

    void Bark() {
        cout << name << " is barking." << endl;
    }
};

int main() {
    // Create an instance of the Dog class
    Dog myDog("Buddy", 4);

    // Access and modify protected members
    myDog.Eat();
    myDog.Walk();
    myDog.Bark();

    return 0;
}





Hierarchical inheritance
In C++, hierarchical inheritance occurs when multiple derived classes inherit from a single base class.\ This means that you have a single base class, and several classes are derived from it.

Refer to code, we have an example of hierarchical inheritance in C++:

We have a base class Animal with two methods, Eat and Sleep, and a protected member name.
We then create derived classes Dog which inherit from the Animal class.
These derived classes add their own specific behaviors (Bark for Dog and Meow for Cat).
Since the visibility mode is public the public method (eat) of the animal can be used from derived class.
We then create derived classes Cat which inherit from the Animal class.
Since the visibility mode is private the public method (eat) of the animal can not be used from derived class.
In the main() function, we create instances of both Dog and Cat, and we call methods from both the base class and the derived classes for each object.
Run the given code.
This code will give error ,since cat cannot access eat method of animal.
Remove line 46 and then Run the code again to verify everything works fine.

Did you like the problem?
C++17
​
 
#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    Animal(string _name) : name(_name) {}

    void Eat() {
        cout << name << " is eating." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    Dog(string _name) : Animal(_name) {}

    void Bark() {
        cout << name << " is barking." << endl;
    }
};

// Derived class 2
class Cat : private Animal {
public:
    Cat(string _name) : Animal(_name) {}

    void Meow() {
        cout << name << " is meowing." << endl;
    }
};

int main() {
    // Create instances of derived classes
    Dog myDog("Buddy");
    Cat myCat("Whiskers");

    // Call methods from the base class and derived classes
    myDog.Eat();
    myDog.Bark();

   
    myCat.Meow();

    return 0;
}




Multiple Inheritance
In C++, multiple inheritance allows a class to inherit from more than one base class.
This means that a derived class can inherit members (variables and functions) from multiple parent classes.

Here's an example of multiple inheritance in C++:

We have two base classes, Animal and Vehicle, each with its own method (Eat and Drive, respectively).
The DogCar class is derived from both Animal and Vehicle using multiple inheritance.
In the main function, we create an instance of the DogCar class named myDogCar and call methods from both base classes (Eat and Drive) as well as the derived class method Bark.
Run the given code to see the output.

Multiple inheritance can also lead to complexities, such as ambiguity in case of naming conflicts between base classes.
Refer to quiz section to learn how to remove ambiguity in such cases.

#include <iostream>
using namespace std;

// First base class
class Animal {
public:
    void Eat() {
        cout << "Animal is eating." << endl;
    }
};

// Second base class
class Vehicle {
public:
    void Drive() {
        cout << "Vehicle is driving." << endl;
    }
};

// Derived class inheriting from both Animal and Vehicle
class DogCar : public Animal, public Vehicle {
public:
    void Bark() {
        cout << "DogCar is barking." << endl;
    }
};

int main() {
    // Create an instance of the DogCar class
    DogCar myDogCar;

    // Call methods from both base classes and the derived class
    myDogCar.Eat();
    myDogCar.Drive();
    myDogCar.Bark();

    return 0;
}





Hybrid Inheritance
Hybrid inheritance occurs when a class inherits from two or more base classes using different types of inheritance within the same class hierarchy.
Hybrid inheritance can lead to complex class relationships, so it's important to carefully design your class hierarchy to avoid issues like ambiguity.

Refer to the given code, It is an example of hybrid inheritance in C++:

We have a base class Animal.
We then create two derived classes, Dog and Cat, both inheriting from Animal.
These classes add their specific methods, Bark and Meow, respectively.
Finally, we create a class called DogCat that uses multiple inheritance to inherit from both Dog and Cat.
This class adds its own method, Play.
In the main function, we create an instance of the DogCat class named myDogCat and call methods from all classes in the hierarchy, demonstrating the use of hybrid inheritance.


#include <iostream>
using namespace std;

// Base class
class Animal {
public:

};

// Derived class 1 from Animal
class Dog : public Animal {
public:
    void Bark() {
        cout << "Dog is barking." << endl;
    }
};

// Derived class 2 from Animal
class Cat : public Animal {
public:
    void Meow() {
        cout << "Cat is meowing." << endl;
    }
};

// Multiple inheritance from Dog and Cat
class DogCat : public Dog, public Cat {
public:
    void Play() {
        cout << "DogCat is playing." << endl;
    }
};

int main() {
    // Create an instance of the DogCat class
    DogCat myDogCat;

    // Call methods from all classes in the hierarchy
    myDogCat.Bark();  // Calls Dog's Bark()
    myDogCat.Meow();  // Calls Cat's Meow()
    myDogCat.Play();  // Calls DogCat's Play()

    return 0;
}



Overriding in single inheritance
In C++ single inheritance, overriding occurs when a derived class redefines a function that is already declared in its base class. This allows the derived class to provide its own specific implementation for that function, effectively replacing the base class's implementation.

Refer to the code to see how to use overriding in C++.

In this example, the Animal class declares a virtual function sound(), and the Dog class overrides it with its own implementation. When you create objects of these classes and call the sound() function on them, the specific implementation in each class is executed.

Run the code to see the output.

#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal a;
    Dog d;

    a.sound(); // Calls Animal's sound()
    d.sound(); // Calls Dog's sound()

    return 0;
}


Ambiguity in Multiple inheritance
Let's see the example by using two base classes and one derived class to demonstrate the multiple inheritance ambiguity, often referred to as the "diamond problem" in C++.

Suppose you have two base classes:

BaseA - The first base class with a method called foo().
BaseB - The second base class with a method called foo() as well.
Derived - Inherits from both BaseA and BaseB.
In this simplified example, when you call derived.foo() Line 24, the compiler doesn't know whether you want to call foo() from BaseA or BaseB because both base classes provide an implementation of foo(). This ambiguity is the essence of the diamond problem.

To resolve this ambiguity, By using BaseA::foo() Line 26 and BaseB::foo() Line 27, you specify exactly which version of the method you want to invoke, resolving the ambiguity in this multiple inheritance scenario.

Run the code it will give error due to ambiguity, Now remove the line 24 and uncomment line 26 and line 27 to see the output after resolving ambiguity.

Did you like the problem?
C++17
​
 


#include <iostream>
using namespace std;

class BaseA {
public:
    void foo() {
        cout << "BaseA's foo()" << endl;
    }
};

class BaseB {
public:
    void foo() {
        cout << "BaseB's foo()" << endl;
    }
};

class Derived : public BaseA, public BaseB {
};

int main() {
    Derived derived;
    
    // derived.foo(); // Ambiguity here!

    derived.BaseA::foo(); // Calls BaseA's foo()
    derived.BaseB::foo(); // Calls BaseB's foo()
    return 0;
}



Multiple Choice Question
What is the order of constructor calls when you create an ElectricCar object?

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle constructor" << endl;
    }
    void start() {
        cout << "Vehicle started" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "Car constructor" << endl;
    }
    void start() {
        cout << "Car started" << endl;
    }
};

class ElectricCar : public Car {
public:
    ElectricCar() {
        cout << "ElectricCar constructor" << endl;
    }
    void start() {
        cout << "ElectricCar started" << endl;
    }


Correct Answer:

Vehicle constructor -> Car constructor -> ElectricCar constructor
Explanation:
In C++, when you create an object of a derived class, the constructor of the base class is called before the constructor of the derived class. This ensures that the base class is fully constructed before any additional construction specific to the derived class takes place. This is known as constructor chaining.





Coding Problem
Suppose you are designing a basic system to model different types of animals. There are two types of animals: Animal and Dog. Each animal has an attribute called name.

Create a base class Animal with a property name (a string).
Create a class Dog that inherits from Animal. The Dog class should have an additional property breed (a string) to represent the breed of the dog.
In the main function, create an instance of the Dog class, set its name and breed properties, and then display the name and breed of the dog.
Ensure that the base class Animal and the derived class Dog are correctly designed and that the properties are inherited and initialized properly.

Task
Given name and breed of dog as input, use display function to print the information of dog.

Input Format
First line contain the name of the dog.
Second line contain the breed of the dog.
Output Format
Print name of the dog on first line.
Print breed of the dog on second line.



#include <iostream>
#include <string>
using namespace std;

// Base class Animal
class Animal {
public:
    string name;

    Animal(string name) : name(name) {}
};

// Derived class Dog
class Dog : public Animal {
public:
    string breed;

    Dog(string name, string breed) : Animal(name), breed(breed) {}

    void displayInfo() {
        cout << name << endl;
        cout << breed << endl;
    }
};

int main() {
    string name,breed;
    cin >> name >> breed ;
    // Create a Dog object
    Dog myDog( name , breed );

    // Display information about the Dog
    myDog.displayInfo();

    return 0;
}



