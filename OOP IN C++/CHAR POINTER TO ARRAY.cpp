#include <iostream>
using namespace std;
int main() {
  cout << "Welcome to pointer to char aaray \n";
  char c[6]="abcde"; 
  cout<<c[0]<<endl;
  cout<<c[1]<<endl;
  cout<<c[2]<<endl;
  cout<<c[3]<<endl;
  cout<<c[4]<<endl;
  cout<<c[5]<<endl;

  cout<<c<<endl;//prints entire array
  cout<<&c[0]<<endl;
  cout<<&c[1]<<endl;//prints entire array from index 1
  cout<<&c[2]<<endl;//prints entire array from index 2
  cout<<&c[3]<<endl;//prints entire array from index 3
  cout<<&c[4]<<endl;//prints entire array from index 4
  cout<<&c[5]<<endl;//prints entire array from index 5


  char *cptr= &c[0];
  cout<<cptr<<endl;//prints entire array elements starting from 0 index

  cout<<*cptr<<endl;//prints the first element of the array
  cout<<*(cptr+1)<<endl;//prints the second element of the array
  cout<<*(cptr+2)<<endl;//prints the third element of the array
  cout<<*(cptr+3)<<endl;//prints the fourth element of the array
  cout<<*(cptr+4)<<endl;//prints the fifth element of the
  cout<<*(cptr+5)<<endl;//prints the sixth element of the array

  

  char temp= 'x';
  char *ptr= &temp;
  cout<<ptr<<endl;//it will print the value at that address until it dont find the null character. once it gets , it stops. therefore the answer is xabcde



  // char ch[6]="abcde";
  // char *chptr= "abcde";//this is the bad practice to point the unknown memorylocation

  

  
  
}