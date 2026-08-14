#include <iostream>
using namespace std;

void change(int a, int b) {
  int temp = a;
  a = b; 
  b = temp;

  cout <<"Inside the fnction after swapping, the value of a is "<< a <<" and the value of b is " << b << ".\n";
}

int main(){
  int a = 5;
  int b = 10;

  cout <<"Before calling the function the value of a is "<< a <<" and the value of b is " << b << ".\n";

  change(a, b); // Pass by value 

  cout <<"After calling the function the value of a is "<< a <<" and the value of b is " << b << ".\n";

  return 0;
}
// Pass by value ma agar function ka andar variable ki value change ho to uska baad bhi main function ma variable ki value change nhi hoti