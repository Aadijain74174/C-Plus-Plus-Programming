#include <iostream>
using namespace std;

int main(){
  char grade = 'A';
  int value = grade; // type conversion or implicit
  cout << value << endl;

  double price = 100.99;
  int new_price = (int)price; // type casting or explicit
  cout << new_price << endl;

  return 0;
}