#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Please, enter the number of line: ";
  cin >> n;

  for(int i = 0; i < n; i++){
    for(int j = i + 1; j > 0; j--){
      cout << j << " ";
    }
    cout << endl;
  }
  return 0; 
}
// Reverse Triangle Pattern