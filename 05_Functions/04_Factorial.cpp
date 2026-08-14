#include <iostream>
using namespace std;

int factorial(int n) {
  int fac = 1;
  for(int i = 1; i <= n; i++){
    fac = fac * i;
  }
  return fac;
}

int main(){
  int n;
  cout <<"Welcome to find factorial\n";
  cout <<"Please, enter the number: ";
  cin >> n;

  int fac = factorial(n);
  cout <<"The facotrial of " << n << " is " << fac << ".\n";

  return 0;
}