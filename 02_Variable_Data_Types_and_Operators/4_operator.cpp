#include <iostream>
using namespace std;

int main(){
  int a = 10, b = 5;

  // Arthmetic operator
  cout << " The sum of 10 and 5 is  = " << (a+b) << endl;
  cout << "The difference of 10 and 5 is = " << (a-b) << endl;
  cout << "The multiplication of 10 and 5 is = " << (a*b) << endl;
  cout << "The division of 10 and 5 is = " << (a/b) << endl;
  cout << "The modulo of 10 and 5 is = " << (a%b) << endl;

  int sum = a + b;
  cout << "The sum of 10 and 5 is = "<< sum << endl;

  //Relational operator
  cout << "10 is less than 5 = " << (a<b) << endl; // false -> 0
  cout << "10 is greater than 5 = " << (a>b) << endl; // true-> 1
  cout << "10 is less than or equal to 11 = " << (a <= 11) << endl; // true -> 1
  cout << "10 is equal to 10 = " << (a == 10) << endl; // true -> 1
  cout << "10 is not equal to 5 = " << (a != b) << endl; // true -> 1
  cout << "10 is not equal to 10 = " << (a != 10) << endl; // false -> 0

  //Logical operator || = OR, && = AND, ! = NOT
  cout << !(3 < 1) << endl;

  cout << "3 is less than 1 OR 3 is less than 5 = " << ((3 < 1) || (3 < 5)) << endl; // true -> 1
  cout << "3 is less than 1 OR 2 is less than 5 = " << ((3 < 1) || (3 < 2)) << endl; // false -> 0

  cout << "3 is greater than 1 AND 3 is greater than 2 = " << ((3 > 1) && (3 > 2)) << endl; // true -> 1
  cout << "3 is greater than 1 AND 3 is greater than 4 = " << ((3 > 1) && (3 > 4)) << endl; // false -> 0
  
  return 0;
}