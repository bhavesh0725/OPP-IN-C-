#include <iostream>
using namespace std;

void printDetails(int *p) { // this is pass by value
  cout << "Value of ptr: " << *p << endl;
  cout << "Address of ptr: " << p << endl;
}

void updateAddress(
    int *(&p)) // In this code, we declare the updateAddress function to take a
               // reference to a pointer (int *&p) as its argument. When you
               // pass the ptr variable to this function, you are effectively
               // passing a reference to the ptr pointer, so any modifications
               // made to p inside the function will directly affect the
               // original ptr in the main function. This way, the address of
               // the pointer in the main function will get updated as expected.
{
  p = p + 1;
  cout << "Address of ptr inside the function call after updating : " << p
       << endl;
}

void updateValue(
    int *(&p)) // same in this as done earlier we can pass the pass by reference
               // and get the desired result as we expect in pass by reference.
               // Otherwise if we pass it by pass by value it would have created
               // the new copy and then update the changes inside the copy only
               // and that changes wont reflect in the main function
{

  *p = *p + 1;
  cout << "value  of ptr inside the function call after updating : " << *p
       << endl;
}

int getSum(int *arr,
           int n) // even if we pass int arr[] like this still means that we
                  // have passed the pointer to the array and no the entire
                  // aaray therefore if we prints the sizeof arr it will give
                  // the answer as 8 which simply means the arr is not passed as
                  // array but passed as pointer to array
{
  cout << endl << "Size : " << sizeof(arr) << endl;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  std::cout << "Welcome t pointer to function \n";

  int value = 5;
  int *ptr = &value;
  cout << "The address of the value vrariable : " << &value << endl;
  printDetails(ptr);

  cout << "Update the address of pointer" << endl;
  cout << "before updating the address : " << ptr << endl;
  updateAddress(ptr);
  cout << "after updating the address  inside the main function : " << ptr
       << endl;

  cout << "*************************************" << endl;
  *ptr = 99;
  cout << "Update the value of pointer" << endl;
  cout << "before updating the value : " << *ptr << endl;
  updateValue(ptr);
  cout << "after updating the value  inside the main function : " << *ptr
       << endl;

  cout << "passing the array as pointer to the function parameter" << endl;
  int arr[5] = {1, 2, 3, 4, 5};
  cout << "Sum is : " << getSum(arr, 5) << endl;

  cout << "Sum of last 3 element is  : " << getSum(arr + 2, 3) << endl; // 3+4+5
}