#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  cout << "Please, enter the first side of the triangle: ";
  cin >> a;
  cout << "Now, enter the second side of triangle: ";
  cin >> b;
  cout << "Finally, enter the third side of the triangle: ";
  cin >> c;

  if((a+b)>c && (b+c)>a && (a+c)>b){
    cout << "The given sides are the side of the triangle.";
  } else{
    cout << "The given sides are not the side of the triangle.";
  }
  return 0;
}