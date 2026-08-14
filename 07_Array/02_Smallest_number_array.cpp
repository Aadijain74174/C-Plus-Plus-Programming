#include <iostream>
using namespace std;

int main(){
  int smallest = INT_MAX; // plus infinity
  int num[5];
  cout << "Enter the numbers: \n";
  for(int i = 0; i < 5; i++){
    cin >> num[i];
  }
  
  for(int i = 0; i < 5; i++){
    // if(num[i] < smallest){
    //   smallest = num[i];
    // }
    smallest = min(num[i], smallest);
  }

  cout << "The smallest number is " << smallest << ".\n";
  return 0;
}