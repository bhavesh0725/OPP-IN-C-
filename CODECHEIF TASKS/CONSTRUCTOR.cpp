Introduction to Constructors
In C++, a constructor is a special member function within a class that is automatically called when an instance (object) of the class is created.
Constructors have the same name as the class and do not have a return type, not even void. Constructors can be overloaded, which means you can define multiple constructors with different parameter lists.

You can refer to code to know how to define and use constructors in C++.

The MyClass class has two constructors: a default constructor (with no parameters) and a parameterized constructor (with an integer parameter).
The default constructor initializes the value member to 0, and the parameterized constructor initializes it with the provided value.
In the main() function, we create two instances of MyClass: obj1 using the default constructor and obj2 using the parameterized constructor.
We then call the displayValue() function to show the initialized values of the value member for each object.
Key points to remember:

Constructors are automatically called when an object is created. They initialize the object's data members.
Constructors have the same name as the class and no return type.
Constructors can be overloaded to provide different ways of initializing objects.
If you don't define any constructors, C++ provides a default constructor that does nothing.
Constructors are essential for proper object initialization and ensuring that objects start in a valid state.
Constructors can also be used for resource allocation or any other necessary setup.



  #include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    
    // Default constructor (no parameters)
    MyClass() {
        cout << "Default constructor called." << std::endl;
        value = 0;
    }

    // Parameterized constructor
    MyClass(int val) {
        cout << "Parameterized constructor called." << std::endl;
        value = val;
    }

    void displayValue() {
        cout << "Value: " << value << std::endl;
    }

};

int main() {
    MyClass obj1;         // Calls the default constructor
    MyClass obj2(42);     // Calls the parameterized constructor

    obj1.displayValue();
    obj2.displayValue();

    return 0;
}










Coding Problem
You are given a Student class having name and age as attributes and a display method. This class also has a parameterized constructor having name and age as parameters to initialize the value of name and age of student respectively.
Given name and age as input, Create a student class, initialize the values and then print the information of Student using display method.

Input Format
First line contain a string representing name of the student.
Second line contain a integer representing age of the student.
Output Format
Print the information of the student using display method.






#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string name,int age){
      this->name = name;
      this->age = age;
    }

    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};


int main() {
    string s; 
    int a;
    cin>>s>>a;
    Student obj(s,a);
    obj.display();

    return 0;
}










Copy Constructor
In C++, a copy constructor is a special constructor that is used to create a new object as a copy of an existing object of the same class. It's like making a copy of something you already have.

You can refer to code example that illustrates the concept in an easy-to-understand way:

The Car class has two constructors: one to set the car's name and another called the copy constructor.
The copy constructor is called when we create a new car object (copiedCar) and initialize it using an existing car object (originalCar).
The copy constructor copies the car's name from the existing car to the new car, creating a new car that's a copy of the original one.
In the main() function, we create an originalCar, display its name, and then create a copiedCar using the copy constructor and display its name.
Key points:

The copy constructor is automatically called when an object is copied.
You can define your own copy constructor to handle deep copying of resources.



#include <iostream>
using namespace std;

class Car {
public:
    string carName;

    // Parameterized constructor
    Car(string carName){
      this->carName = carName;
    }

    // Copy Constructor
    Car(Car &c){
      carName = c.carName;
    }
};

int main() {
    Car originalCar("Beat"); // Parameterized constructor called here
    cout<<originalCar.carName<<endl;

    Car copiedCar(originalCar); // Copy constructor called here
    cout<<copiedCar.carName<<endl;

    return 0;
}








Static in OOPs
In C++, the static keyword can also be used within a class to define static data members and static member functions.

Static Data Members: Static data members belong to the class itself, rather than to individual objects created from the class. They are shared among all instances of the class and are initialized only once, typically at the beginning of the program.
Static Member Functions: Static member functions are associated with the class rather than with instances of the class. They can only access static data members and other static member functions of the class.
Note

In C++, the scope resolution operator :: is used to access elements (variables, functions, classes, etc.) that belong to a particular scope, such as a namespace or a class.
You can use the scope resolution operator to access static data members and static member functions of a class. Refer to the code to know how to use scope resolution operator.
In this example:

staticCounter is a static data member shared among all instances of MyClass.
In the constructor of MyClass, staticCounter is incremented each time an object is created.
displayCounter() static member function is able to access the static data member and display its value.
In the main() function, two MyClass objects are created, and then the displayCounter() function is called to show the value of staticCounter.




  #include <iostream>
using namespace std;

class MyClass {
public:
    static int staticCounter; // Static data member

    MyClass() {
        staticCounter++; // Incremented each time an object is created
    }

    static void displayCounter() {
        cout << "Static Counter: " << staticCounter << endl;
    }
};

int MyClass::staticCounter = 0; // Initialize the static data member

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass::displayCounter(); // Accessing the static member function

    return 0;
}














Coding Problem
Create a BankAccount class that simulates a simple bank account. The class should have the following features:

A static data member totalBalance to keep track of the total balance across all accounts.
A constructor that takes an initial balance as a parameter and updates totalBalance accordingly.
There are 2 BankAccounts in the Bank. Given the balance of both the accounts as input, create the object using constructor to update totalBalance and print totalBalance of Bank.

Input Format
First line contain 2 integers representing the balances of bank accounts.

Output Format
Print the value of totalBalance.



  #include <iostream>
using namespace std;

class BankAccount {
public:
    static int totalBalance;
    int balance;
    
    BankAccount(int amount) {
        totalBalance += amount;
    }
};

int BankAccount::totalBalance = 0.0;

int main() {
    int amount; 
    cin>>amount;
    BankAccount account1(amount);
    cin>>amount;
    BankAccount account2(amount);


    cout << BankAccount::totalBalance << endl;

    return 0;
}



Multiple Choice Question
Which of the following is the correct output for the given code?

#include <iostream>
using namespace std;

class BankAccount {
public:
    static int totalBalance;
    int id;
};

int main() {
    BankAccount account1;
    cout << sizeof(account1) << endl;

    return 0;
}


Correct Answer:

4
Explanation:
In a class, a static data member is shared among all instances of the class. It's associated with the class itself rather than individual objects. 
Thus sizeof(account1) = sizeof(int) = 4



  You are given a class Circle having radius as attributes, constructors and a getArea function which return the area of the circle.

Task
Create two circles c1 and c2. c1 is created using the default constructor, which initializes its radius to 1.0. c2 is created using the constructor with one parameter, which initializes its radius to 5.0. The getArea() function is used to calculate the area of each circle.

Debug the code to ensure everything works fine.

Output Format
Print the area of c1 at first line.
Print the area of c2 at second line.


  #include <iostream>

using namespace std;

class Circle {
private:
  double radius;
public:
  // Default constructor
  Circle() {
    radius = 1.0;
  }

  // Constructor with one parameter
  Circle(double radius) {
    this->radius = radius;
  }

  // Calculate the area of the circle
  double getArea() {
    return 3.14159 * radius * radius;
  }
};

int main() {
  // Create a circle using the default constructor
  Circle c1;
  cout << "The area of circle c1 is " << c1.getArea() << endl;

  // Create a circle using the constructor with one parameter
  Circle c2(5.0);
  cout << "The area of circle c2 is " << c2.getArea() << endl;

  return 0;
}


