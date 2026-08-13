#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "Please, enter the number : ";
  cin >> n;
  if(n > 99 && n < 1000){
    cout << "The given number is three digit number.\n";
  } else{
    cout << "The given number is not three digit number.\n";
  }
  return 0;
}