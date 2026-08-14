#include <iostream>
using namespace std;

int main(){
  int largest = INT_MIN; // minus infinity
  int num[5];
  cout << "Enter the numbers: \n";
  for(int i = 0; i < 5; i++){
    cin >> num[i];
  }
  
  for(int i = 0; i < 5; i++){
    // if(num[i] > largest){
    //   largest = num[i];
    // }
    largest = max(num[i], largest);
  }

  cout << "The largest number is " << largest << ".\n";
  return 0;
}