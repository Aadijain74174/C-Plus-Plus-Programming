#include <iostream>
using namespace std;

int main(){
  int marks;
  cout <<"Please, enter the marks: ";
  cin >> marks;

  if(marks >= 90){
    cout <<"A\n";
  } else if(marks >= 80 && marks < 90){
    cout <<"B" << endl;
  } else{
    cout <<"C\n";
  }
  return 0;
}
