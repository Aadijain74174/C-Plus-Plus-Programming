#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Please, enter the number: ";
  cin >> n;

  cout << (n >= 0 ? "Your number is positive." : "Your number is negative.") << endl;
  return 0;
}