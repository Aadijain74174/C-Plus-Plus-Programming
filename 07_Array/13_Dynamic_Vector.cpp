#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> vec;

  vec.push_back(0);
  cout << vec.size() << endl; // size = 1
  cout << vec.capacity() << endl; // capacity = 1

  vec.push_back(1);
  cout << vec.size() << endl; // size = 2
  cout << vec.capacity() << endl; // capacity = 2

  vec.push_back(2);
  cout << vec.size() << endl; // size = 3
  cout << vec.capacity() << endl; // capcaity = 4

  vec.push_back(3);
  cout << vec.size() << endl; // size = 4
  cout << vec.capacity() << endl; // capacity = 4

  vec.push_back(4);
  cout << vec.size() << endl; // size = 5 
  cout << vec.capacity() << endl; // capacity = 8
  return 0;
}