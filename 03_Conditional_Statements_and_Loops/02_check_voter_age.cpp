#include <iostream>
using namespace std;

int main(){
  int age;
  cout <<"Please, enter the age: ";
  cin >> age;

  if(age >= 18){
    cout <<"You can vote" << endl;
  } else{
    cout <<"You cannot vote because you are not 18 above." << endl;
  }
  return 0;
}