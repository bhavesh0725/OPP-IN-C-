#include <iostream>
#include<bits/stdc++.h>
using namespace std;


class humans{
  public:
  void speak(){
    cout<<"humans speaking"<<endl;
  }
};

class male : public humans{
public:
  void speak(){
    cout<<"males speaking"<<endl;
  }

};

class females : public humans{
public:
  void speak(){
    cout<<"females speaking"<<endl;
  }

};

int main() {
  male m1;
  m1.humans::speak();
  m1.speak();
  females f1;
  f1.humans::speak();
  f1.speak();
  return 0;
}