// Introduction to Structures
// In C++, structures are user-defined data types that allow you to group together different variables under a single name.

// Here's how you can define and use structures in C++:

// We define a structure named MyStruct using the struct keyword. Inside the structure, we declare three members: an int variable x, a double variable y, and a char variable c.
// In the main function, we declare a variable myObject of type MyStruct. This creates an instance of the structure.
// We access and initialize the structure members using the dot (.) operator. For example, myObject.x refers to the x member of the myObject structure.
// Remember that structures in C++ can also have member functions, but they are limited in functionality compared to classes. It's generally recommended to use classes for more complex data structures that require inheritance, encapsulation and abstraction, while using structs for simpler data containers.

#include <iostream>

// Define the structure
struct MyStruct {
    int x;
    double y;
    char c;
};

int main() {
    // Declare and initialize a structure variable
    MyStruct myObject;
    myObject.x = 10;
    myObject.y = 3.14;
    myObject.c = 'A';

    // Access and use structure members
    std::cout << "x: " << myObject.x << std::endl;
    std::cout << "y: " << myObject.y << std::endl;
    std::cout << "c: " << myObject.c << std::endl;

    return 0;
}





// Coding Problem
// You are given a class Product having name and price as attributes. This class also contain display method to print the information of the Product.

// Task
// Given the name and price of Product as input. Print the information of the product using display method.

#include <iostream>
using namespace std;

struct Product {
    string name;
    int price;

    void display(){
        cout<<"Name - "<<name<<endl;
        cout<<"Price - "<<price<<endl;
    }
};

int main() {
    Product obj;
    cin>>obj.name>>obj.price;

    obj.display();

    return 0;
}




// Classes Vs Structures
// In C++, both classes and structures are used to create user-defined data types, but they have some differences in default access control and intended use. Here are the main differences and similarities between classes and structures:

// Default Access Control:

// In classes, members are private by default. This means that if you declare a class without specifying an access modifier, its members will be private.
// In structures, members are public by default. If you declare a structure without specifying an access modifier, its members will be public.
// Usage and Intent:

// Traditionally, classes were used for more complex data structures that required encapsulation, data hiding, and abstract data types.
// Structures were often used for simple data containers, where the focus was on grouping related data together.
// In summary, this distinction is blurred, and the choice between "class" and "struct" often depends on the desired semantics and intent of the data type.




Coding Problem
In C++, structures are user-defined data types that allow you to group together different variables under a single name.

// Task
// You are given a structure Car having name, year and mileage as attributes. This structure also contains a function purchase, this function will print "YES" if year is greater than 2018 and mileage is greater than 10, else print "NO".

// Input Format
// First line contain a string representing the name of the car.
// Second line contain a integer representing the year of the car.
// Third line contain a integer representing the mileage of the car.
// Output Format
// Print "YES" if year is greater than 2018 and mileage is greater than 10, else print "NO".


  #include <iostream>
using namespace std;

struct Car {
    string name;
    int year;
    int mileage;

    void purchase(){
        if(year>2018 && mileage>10){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
};


int main() {
    Car obj;
    cin>>obj.name>>obj.year>>obj.mileage;
    obj.purchase();

    return 0;
}







// Coding Problem
// Write a Player class containing height and weight as attributes. Also this class contains a BMI method which returns an integer BMI of this person.

// Note
// BMI = floor((weight)/(height^2))

// Here,  floor() function returns the largest integer that is smaller than or equal to the value passed as the argument.
// Input Format
// First line contains two integers height and weight respectively.

// Output Format
// Print bmi on first line as ouput.

#include <iostream>
using namespace std;

class Player{
public:
  int  height; 
  int weight;

  int bmi(){
    return weight/(height*height);
  }
};

int main() {
  Player obj; 
  cin>>obj.height>>obj.weight;
  cout<<obj.bmi();

  return 0;
}










// Coding Problem
// You are given a Medicine class having name and expiration year as attributes. A person can take a medicine if the current year is less than or equal to expiration year of the medicine.

// Task
// Given the name and expiration year of a medicine and current year. Print "YES" if current year is less than or equal to expiration year else print "NO".


#include <iostream>
using namespace std;

class Medicine{
public:
  string name; 
  int expiration_year;

};

int main() {
  Medicine obj;
  obj.name = "doggo";
  obj.expiration_year = 2024;
  int current_year = 2023;

  if(current_year <= obj.expiration_year){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }

  return 0;
}












// Coding Problem
// Create a calculator class having two integers a and b as attributes. This class should also contain addition, subtraction and multiplication methods which prints the addition, subtraction and multiplication of these integers respectively.

// Input Format
// First line contain two integers a and b respectively.

// Output Format
// First line will contain the output from the addition method.
// Second line will contain the output from the subtraction method.
// Third line will contain the output from the multiplication method.




#include <iostream>
using namespace std;

class Calculator{
public:
  int a; 
  int b;

  void addition(){
    cout<<a+b<<endl;
  }

  void subtraction(){
    cout<<a-b<<endl;
  }

  void multiplication(){
    cout<<a*b<<endl;
  }
};

int main() {
  Calculator obj;
  cin>>obj.a>>obj.b;
  obj.addition();
  obj.subtraction();
  obj.multiplication();

  return 0;
}












// Debug this code
// What is wrong with the following code?

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p = {3, 7};

    cout << "Point: (" << p.x << ", " << p.y << ")\n";

    return 0;
}


// Select multiple options as applicable
// --->The code will run perfectly.
// --->Compilation error. p = {3, 7}; is not the correct way to initialize a structure variable in C.
// --->Compilation error. `p` variable name is too short for structures. It needs to be at least 2 character length.


// Correct Answer:

// The code will run perfectly.
// Explanation:
// The line p = {3, 7}; can also be used to initialize a structure variable in C++.
