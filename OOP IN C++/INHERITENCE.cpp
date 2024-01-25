#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class human{
  public:
      int height;
      int weight;
      string name;
      string color;
      int age;


    void setDetails(int height, int weight, string name, string color, int age)
{
      this->height=height;
      this->weight= weight;
      this->name=name;
      this->color=color;
      this->age=age;
};
    void getDetails(){
      cout<<"Height: "<<this->height<<endl;
      cout<< "Weight: "<<this->weight<<endl;
      cout<< "Name: "<<this->name<<endl;
      cout<< "Color: "<<this->color<<endl;
      cout<< "Age: "<<this->age<<endl;
    };
      
        
};


class male : public human{
  public:
    string hobbies;
    char gender;

  void setDetails1(string hobbies, char gender){
    this->hobbies=hobbies;
    this->gender=gender;
  }
  void getDetails1(){
  cout<< "Gender: "<<this->gender<<endl;
  cout<< "Hobbies: "<<this->hobbies<<endl;
 
}
};



int main() {

  male m1;
  int height, weight, age;
  string name, color, hobbies;
  char gender;
  cout<<"Enter Height: "<<endl;
  cin>>height;
  cout<< "Enter Weight: "<<endl;
  cin>>weight;
  cout<< "Enter Name: "<<endl;
  cin>>name;
  cout<< "Enter Color: "<<endl;
  cin>>color;
  cout<< "Enter Age: "<<endl;
  cin>>age;
  cout<< "Enter Hobbies: "<<endl;
  cin>>hobbies;
  cout<< "Enter Gender: "<<endl;
  cin>>gender;


  cout<<"*****************************"<<endl;
  m1.setDetails(height, weight , name ,color , age);
  m1.setDetails1(hobbies, gender);
  m1.getDetails();
  m1.getDetails1();
  
  

  
  return 0;
  
}