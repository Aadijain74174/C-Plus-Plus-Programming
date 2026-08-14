#include <iostream>
using namespace std;

int Sum(int a, int b){ // parameters
  int sum = a + b;
  return sum;
}
int main(){
  int first, second;
  int sum = 0;
  
  cout <<"Please, enter the first number: ";
  cin >> first;
  cout <<"Now, enter the second number: ";
  cin >> second;

  sum = Sum(first, second); // arguments
  cout <<"The sum of the number is " << sum << ".\n";
  return 0;
}