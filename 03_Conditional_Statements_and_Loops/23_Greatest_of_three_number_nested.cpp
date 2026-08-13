#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  cout << "Please, enter the first number: ";
  cin >> a;
  cout << "Now, enter the second number: ";
  cin >> b;
  cout << "Finally, enter the third number: ";
  cin >> c;

  if(a > b){
    if(a > c){
      cout << a << " is the greatest number.";
    } else{
      cout << c << " is the greatest number.";
    }
  } else{
    if(b > c){
      cout << b << " is the greatest number.";
    } else{
      cout << c << " is the greatest number.";
    }
  }
  return 0;
}