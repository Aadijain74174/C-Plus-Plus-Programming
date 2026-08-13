#include <iostream>
using namespace std;
int main(){
  int num;
  cout << "Please, enter the number: ";
  cin >> num;

  int product = 1;
  while(num > 0){
    product = product * (num % 10);
    num = num / 10;
  }
  cout << "The product of the digit of the number is " << product << endl;
  return 0;
}