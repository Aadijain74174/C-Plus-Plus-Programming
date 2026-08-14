#include <iostream>
using namespace std;

int main(){
  int marks[5] = {99, 100, 54, 36, 43};
  int size = sizeof(marks) / sizeof(int);

  cout << marks[0] << endl;
  cout << marks[1] << endl;
  cout << marks[2] << endl;
  cout << marks[3] << endl;
  cout << marks[4] << endl;
  cout << sizeof(marks) << endl;

  //loops;
  for(int i = 0; i < size; i++){
    cout << marks[i] << endl;
  }

  return 0;
}