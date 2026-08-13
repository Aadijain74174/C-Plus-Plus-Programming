#include <iostream>
using namespace std;
int main(){
  int cp;
  cout << "Please, enter cost price: ";
  cin >> cp;
  int sp;
  cout << "Now, enter selling price: ";
  cin >> sp;
  
  if(sp > cp){
    cout << "Profit is " << sp - cp;
  } else if (sp < cp){
    cout << "Loss is " << cp - sp;
  } else{
    cout << "No profit, no loss.\n";
  }

  return 0;
}