#include <iostream>
using namespace std;
int main(){
  int num1, num2;
  char op;
  cout << "Please, enter the first number: ";
  cin >> num1;
  cout << "Now, enter the second number: ";
  cin >> num2;
  cout << "Finally, enter the operator: ";
  cin >> op;

  switch(op){
    case '+':
       cout << "The sum of the number is " << num1 + num2;
       break;
    case '-':
       cout << "The subtaction of the number is " << num1 - num2;
       break;
    case '*':
       cout << "The multiplication of the number is " << num1 * num2;
       break;
    case '/': 
       cout << "The division of the number is " << num1 / num2;
       break;
    default:
       cout << "Invalid operator" << endl;
  }
  return 0;
}