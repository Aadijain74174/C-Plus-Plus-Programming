#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "Please, enter the number: ";
  cin >> n;
  bool flag = true; // true means prime

  if(n <= 1){
    flag = false;
  }
  for(int i = 2; i <= n/2; i++){
    if(n % i == 0){
      flag = false;
      break;
    }
  }
  if(n <= 1){
    cout << "The number is neither prime nor composite.";
  }
  else if(flag == true){
    cout << "The number is prime.";
  }
  else{
    cout << "The number is composite.";
  }
  return 0;
}