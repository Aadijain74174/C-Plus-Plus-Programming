#include <iostream>
using namespace std;

int main(){
  int num;
  cout <<"Please, enter the number upto you want to sum: ";
  cin >> num;

  int sum = 0;
  for(int i = 1; i <= num; i++){
    sum += i;
  }

  cout <<"The sum of all numbers upto "<< num <<" is " << sum<< endl;
  return 0;
}