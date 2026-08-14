#include <iostream>
using namespace std;

int sum_of_digit(int num) {
  int digitSum = 0;

  while(num > 0){
    digitSum = digitSum + (num % 10);
    num = num / 10;
  }
  return digitSum;
}

int main(){
  int num;
  cout <<"Please, enter the number: ";
  cin >> num;
  
  int digitSum = sum_of_digit(num);
  
  cout <<"The sum of digit of number "<< num << " is " << digitSum;
  return 0;
}