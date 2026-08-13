#include <iostream>
using namespace std;

int main(){
  int age = 18;
  cout << age << endl;
  cout << sizeof(age) << endl;

  char grade = 'A';
  cout << grade << endl;
  cout << sizeof(char) << endl;

  float PI = 3.14f;
  cout << PI << endl;
  cout << sizeof(float) << endl;

  bool is_safe = true; // true = 1;
  cout << is_safe << endl;
  cout << sizeof(bool) << endl;

  is_safe = false; // false = 0;
  cout << is_safe << endl;
  cout << sizeof(bool) << endl;

  double price = 100.99;
  cout << price << endl;
  cout << sizeof(price) << endl;
  
  return 0;
}