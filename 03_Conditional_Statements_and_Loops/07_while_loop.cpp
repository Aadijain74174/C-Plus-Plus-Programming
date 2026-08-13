#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Please, enter the number upto you want to print the numbers: ";
  cin >> n;

  int i = 1;
  while(i <= n){
    cout << i << " ";
    i++;
  }
  return 0;
}