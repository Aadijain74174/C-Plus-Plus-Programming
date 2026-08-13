#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "Please, enter the number: ";
  cin >> n;

  int sum = 0;
  while(n > 0){
    sum = sum + (n%10);
    n = n / 10;
  }
  cout << "The sum of the digit of the number is " << sum << endl;
  return 0;
}