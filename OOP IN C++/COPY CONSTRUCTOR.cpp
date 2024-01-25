#include<iostream>
using namespace std;

class hero {

private:
    int health;
    char rank;
    string name;

public:
  hero(){ // default constructor,  user defined without parameter
    cout<<"constructor called"<<endl;
  }

  hero(int health, char rank ){ 
    // parameterized constructor user defined with parameter
    cout<<"The address of ramesh in class using this -> "<<this<<endl;
    this->health = health;
    this->rank = rank;

  }


  //copy constructor
  //        ramesh
  hero(hero &example){  //here & is used to avoid the infinite loop condition  therefore it is called by reference.
    cout<<"The address of suresh in class using this -> "<<this<<endl;
    cout<<"user defined copy constructor called"<<endl;
    this->health = example.health;
    this->rank = example.rank;

    // here this points to the new object where the value is to be copied
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
    hero ramesh(100,'A');
    
    hero suresh(ramesh); // copy constructor called
    cout<<suresh.getHealth()<<endl;
    cout<<suresh.getRank()<<endl;
    cout<<"user defined Copy constructor executed successfully"<<endl;


  cout<<"The address of the ramesh is : "<<&ramesh<<endl;
  cout<<"The address of the suresh is : "<<&suresh<<endl;

  // I have not created the copy constructor it is created by default
  //   but we can also create user define copy constructor
  //   after creating user defined copy constructor, origin constructor get died as default simple constructor.

  

  
}