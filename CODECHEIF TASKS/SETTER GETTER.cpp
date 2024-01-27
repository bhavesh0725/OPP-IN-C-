// //Coding Problem
// We know that members declared as private are only accessible from within the class itself. They are not accessible from outside the class, including derived classes (in the case of inheritance).
// Thus here we will learn how to access and modify the private data of classes.
// We are given a class User having name and password as private data. This class also contain two methods get and set which are used to access and modify private data.

// Note - "this" is used within a class member function to refer to the object on which the member function is called. You can refer to the code to know how to use it.

// Task
// Initially the name of the user is "Alice" and password is "Wonderland". Print this information using get function.
// Now, change the name of the user to "Tom" and password to "Jerry" using set function. Print this information using get function.
// Run this code to verify the output.


#include <iostream>
using namespace std;

class User{
private:
    string Name="Alice";
    string Password="Wonderland";

public:
    void set(string name,string password){
        this->Name = name;
        this->Password = password;
    }
    void get(){
        cout<<Name<<" "<<Password<<endl;
    }
};

int main() {
    User obj;
    obj.get();
    obj.set("Tom","Jerry");
    obj.get();
    return 0;
}




task2

// Eligibility Checker for Students
// You are tasked with designing a simple program that determines the eligibility of students based on their scores and ages.

// Class Definitions:

// Student class:
// Attributes:
// name (String): The name of the student.
// score (int): The student's academic score.
// age (int): The age of the student.
// Methods:
// eligible(): A method that checks the student's eligibility and prints "YES" if the score is greater than 10 and the age is greater than 20. Otherwise, it prints "NO."
// Main Class:

// Codechef class:
// The main method:
// Creates an instance of the Student class.
// Sets the name, score, and age attributes for the student with predefined values.
// Calls the eligible method to determine and display the student's eligibility.
// Task
// Complete the given code to ensure Eligibility Checker for Students works fine.


#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int score;
    int age;

    void eligible(){
        if(score>10 && age>20){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
};


int main() {
    Student obj;
  cout<<"Enter the name of the student: ";
    cin>>obj.name;
  cout<<"Enter the age of the student: ";
    cin>>obj.age;
  cout<<"Enter the score of the student: ";
    cin>>obj.score;
    obj.eligible();

    return 0;
}




task3

// Coding Problem
// Write a class Rectangle with length and breadth as attribute and area and perimeter as methods. Given length and breadth as input, Print area and perimeter of rectangle using area and perimeter methods respectively.

// Input Format
// The first line of input contains length of rectangle.
// The second line of input contains breadth of rectangle.
// Output Format
// First line contains the output of area method of Rectangle.
// Second line contains the output of perimeter method of Rectangle.


#include <iostream>
using namespace std;

class Rectangle{
public:
    int length;
    int breadth;
    
    void area(){
        cout<<length*breadth<<endl;
    }
    void perimeter(){
        cout<<2*(length+breadth)<<endl;
    }
};

int main() {
    Rectangle r;
    cin>>r.length>>r.breadth;
    r.area();
    r.perimeter();
	return 0;
}

