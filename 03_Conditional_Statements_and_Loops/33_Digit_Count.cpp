#include <iostream>
using namespace std;
int main(){
  int num;
  cout << "Please, enter the number: ";
  cin >> num;

  int digit_count= 0;
  int temp = num;
  while(temp > 0){
    temp = temp / 10;
    digit_count++;
  }
  cout << "The digit in the number is " << digit_count;
  return 0;
}