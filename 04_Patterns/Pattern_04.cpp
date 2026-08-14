#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Please, enter the number of line: ";
  cin >> n;

  int num = 1;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
  return 0;
}
// Number Square Pattern