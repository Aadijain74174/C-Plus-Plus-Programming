#include <iostream>
#include <cmath>
using namespace std;

int BinaryNum(int Dnum){
  int Bnum = 0;
  int i = 0;
  while(Dnum > 0){
    Bnum = Bnum + (pow(10, i) * (Dnum % 2));
    Dnum = Dnum / 2;
    i++;
  }
  return Bnum;
}

int main() {
  int Dnum;
  cout <<"Please, enter the decimal number: ";
  cin >> Dnum;

  int Bnum = BinaryNum(Dnum);
  cout << "The decimal number " << Dnum << " in binary base number number system is " << Bnum << ".\n";
  return 0;
}