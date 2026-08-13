#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Please, enter the number: ";
  cin >> n;

  if(n <= 1){
    cout <<"The given number is not prime.";
    return 0;
  }
  for(int i = 2; i*i <= n; i++){
    if(n % i == 0){
      cout <<"The given number is not prime.";
      return 0;
    }
  }

  cout <<"The given number is prime.";
  return 0;
}