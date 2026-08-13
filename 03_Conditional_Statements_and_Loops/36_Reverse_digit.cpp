#include <iostream>
using namespace std;
int main(){
  int num;
  cout << "Please, enter the number: ";
  cin >> num;

  int reverse = 0;
  while(num > 0){
    reverse = (reverse * 10) + (num % 10);
    num = num / 10;
  }
  cout << "The reverse of the number is " << reverse;
  return 0;
}