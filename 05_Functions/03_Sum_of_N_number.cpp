#include <iostream>
using namespace std;

int SumN(int N){
  int sum = 0;
  for(int i = 0; i <= N; i++){
    sum += i;
  }
  return sum;
}

int main(){
  int n;
  cout <<"Please, enter the number upto you want to sum: ";
  cin >> n;

  int sumN = SumN(n);
  cout <<"The sum of all numbers from 1 to "<< n <<" is "<< sumN << ".\n";
  return 0;
}
