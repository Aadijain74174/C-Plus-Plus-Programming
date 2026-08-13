#include <iostream>
using namespace std;

int main(){
  int num;
  cout << "Please, enter a number: ";
  cin >> num;

  int copy = num;
  int rnum = 0;
  while (copy > 0) {
    rnum = (rnum * 10) + (copy % 10);
    copy = copy / 10;
  }

  cout << "The reverse number of " << num << " is " << rnum;
  return 0;
}