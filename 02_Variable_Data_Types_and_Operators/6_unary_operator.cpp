#include <iostream>
using namespace std;
int main(){
  int a = 10;
  int b = a++; // post increment ->kaam, update 
  
  cout << "b = " << b << endl; // 10
  cout << "a = " << a << endl; // 11

  int c = 15;
  int d = ++c; // pre increment -> update, kaam
  cout << "d = " << d << endl; //16
  cout << "c = " << c << endl; //16

  int e = 20;
  int f = e--; // post decrement -> kaam, update
  cout << "f = " << f << endl; //20
  cout << "e = " << e << endl; //19

  int g = 20;
  int h = --g; // pre decrement -> update, kaam
  cout << "h = " << h << endl; //19
  cout << "g = " << g << endl; //19

  return 0; 
}