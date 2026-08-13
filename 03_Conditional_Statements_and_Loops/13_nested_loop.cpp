#include <iostream>
using namespace std;

int main(){

  int star;
  int line;
  cout <<"Please, enter number of stars in one line: ";
  cin >> star;
  cout <<"Now, enter the number of line: ";
  cin >> line;

  for(int i = 1; i <= line; i++){
    for(int j = 1; j <= star; j++){
      cout <<"*";
    }
    cout << endl;
  }
  return 0;
}