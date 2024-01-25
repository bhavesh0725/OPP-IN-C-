#include <iostream>
using namespace std;

int main() {
  std::cout << "Welcome to pointer's journey!\n";


  int arr[10]={10,33,4324,232,454,5654,34,23,54,23};
  cout<<"address of first memory block is : "<<arr<<endl;
  cout<<"another way for printing address of first memory block is : "<<&arr[0]<<endl;


  cout<<"This will return the value at zero index of the array: "<<*arr<<endl;

  cout<<"This will return the value at zero index of the array plus 1 : "<<*arr+1<<endl;

  cout<<"This will return the value at zero index of the array plus 2 : "<<*arr+2<<endl;

  cout<<"This will return the value at 1 index of the array  : "<<*(arr+1);

  cout<<"This will return the value at 2 index of the array  : "<<*(arr+2);

  // so the general formula for the idea : arr[i]= *(arr+i)

  // alternately we can write , i[arr]= *(i+arr)

    int temp[10]={1,2};
    cout<<endl<<"Everything is fine"<<endl<<endl;
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;


    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;


  // size of array = no of block * size of data type of each block

  //   sizeof(ptr) = address in hd = 8bytes
  // sizeof(*ptr) = value of the block = 4bytes

int a[20]={1,2,3,4,5};
  cout<<endl<<"Everything is perfect"<<endl<<endl;

  cout<<"&a[0]: "<<&a[0]<<endl;
  cout<<"a: "<<a<<endl;
  cout<<"&a: "<<&a<<endl;
  cout<<"*a: "<<*a<<endl;

  int *p = &a[0];
  cout<<"p: "<<p<<endl;
  cout<<"*p: "<<*p<<endl;
  cout<<"&p: "<<&p<<endl;

  //last diffference between array and pointer is that we cant change the entry in the symbol table of the array but we can change the entry in the symbol table of the pointer


  // cout<<"before changing the entry in symbol : "<< &a<<endl;
  // &a += 1;
  // cout<<"after changing entry in symbol : "<< &a<<endl;

  // this will generate the error : expression is not assignable
  
  // but we can change the pointer to the array i.e entry in the symbol table

    cout<<"before changing entry in symbol :: "<< ptr<<endl;
    ptr += 1;
    cout<<"after changing entry in symbol :: "<< ptr<<endl;
//the pointer has  oved to the next index

   
}