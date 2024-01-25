#include<iostream>
using namespace std;
class MyClass {
private:
    int myValue;
   
public:
    void setMyValue(int newValue, string username) {
      if(username=="Bhavesh"){
        myValue = newValue; // Accessing a private member within the class
      }
      else{
        cout<<"Access denied for settting the value"<<endl;
      }
       
    }

    int getMyValue(string username) {
      if(username =="Bhavesh"){
        return  myValue; 
      }// Accessing a private member within the class

      else{
        cout<<"Access denied for getting the value"<<endl;
        return -1;
      }
    }
};

int main() {
    MyClass obj1;
    // You can't do this, as myValue is private
    
  int val;
  string username;

  cout<<"Enter the username to set to private data member ";
  cin>>username;
    cout<<"Enter the value to set to private data member ";
    cin>>val;
    // But you can use the setter and getter methods
    
    obj1.setMyValue(val, username);
    int ans = obj1.getMyValue(username); // Accessing myValue through the public interface

  if(ans==-1){
    cout<<"you have entered invalid username";
  }
  else{
  cout<<"The username is valid thus value you entered is : "<<ans;
  return 0;
  }
}

// Private members are designed to be accessible only within the class where they are defined. This means that other functions and code outside the class cannot directly access these private members. However, member functions, including setter and getter methods, are exceptions to this rule. They have privileged access to the private members of the class.