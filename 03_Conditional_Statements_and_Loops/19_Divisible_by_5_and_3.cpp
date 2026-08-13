#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "Please, enter the number: ";
  cin >> n;

  if(n % 5 == 0 && n % 3 == 0){
    cout << "The number is divisble by 5 and 3.\n";
  }
  else{
    cout << "The number is not divisible by 5 and 3.\n";
  }
  return 0;
}