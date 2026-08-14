#include <iostream>
using namespace std;

int factorial(int n) {
  int fac = 1;
  for(int i = 1; i <= n; i++){
    fac *= i;
  }
  return fac;
}

int nCr(int n, int r){
  int fac_n = factorial(n);
  int fac_r = factorial(r);
  int fac_nmr = factorial(n-r);

  return fac_n / (fac_r * fac_nmr);
}

int main(){
  int n, r;
  cout << "------Combination(nCr) Calculator------\n";

  cout << "Enter the total number of items(n); ";
  cin >> n;
  cout << "Enter the number of items to choose(r): ";
  cin >> r;

  if(n < 0 || r < 0){
    cout << "Error: Please, enter positive integes for n and r." << endl;
  } else if(r > n) {
    cout << "Error: r cannot be greater than n." << endl;
  } else{
     cout << "Result: " << nCr(n, r) << endl;
  }

  return 0;
}