#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Please, enter the number of line: ";
  cin >> n;
  

  for(int i = 0; i < n; i++){
    int num = 1;
    for(int j = 0; j < n-1-i; j++){
      cout << " ";
    }
    for(int j = 0; j <= i; j++){
      cout << num;
      num++;
    }
    for(int j = i; j > 0; j--){
      cout << j;
    }
    cout << endl;
  }
  return 0;
}
// Pyramid Pattern