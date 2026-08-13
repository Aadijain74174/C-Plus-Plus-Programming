#include <iostream>
using namespace std;
int main(){
  int marks;
  cout << "Please, enter the marks: ";
  cin >> marks;
  
  if(marks > 80){
    cout << "Your marks are very good.";
  } else if (marks > 60){
    cout << "Your marks are good.";
  } else if (marks > 40){
    cout << "Your marks are average.";
  } else {
    cout << "You are fail.";
  }
  return 0;
}