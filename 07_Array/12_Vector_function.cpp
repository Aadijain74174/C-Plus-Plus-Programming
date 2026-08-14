#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
  cout << "size = " << vec.size() << endl; // size function represent the size of the vector

  vector<int> vec1;
  cout << "size = " << vec1.size() << endl;
  vec1.push_back(25); // push back function store the value in the last position in the vector
  vec1.push_back(35);
  vec1.push_back(45);
  vec1.push_back(55);
  cout << "size after push back = " << vec1.size() << endl; // it will print size 4
  for(int val : vec1){
    cout << val << endl;
  }

  vec1.pop_back(); // it will delete the last position element
  cout << "size after pop back = " << vec1.size() << endl;
  for(int val : vec1){
    cout << val << endl;
  }

  cout << vec1.front() << endl; // it will print first element
  cout << vec1.back() << endl; // it will print last element
  cout << vec1.at(2) << endl; // it will use same as vec[i]
  return 0;
}
