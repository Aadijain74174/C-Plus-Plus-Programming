#include <iostream>
using namespace std;

int main(){
  int num;
  cout <<"Please, enter the number upto you want to sum: ";
  cin >> num;

  int sum_odd = 0;
  for(int i = 1; i <= num; i++){
    if(i % 2 != 0){
      sum_odd += i;
    }
  }

  cout <<"The sum of all odd number upto "<< num <<" is "<< sum_odd << endl;
}