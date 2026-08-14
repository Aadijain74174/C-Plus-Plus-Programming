#include <iostream>
using namespace std;

int decimalNum(int Bnum){
  int Dnum = 0;
  int i = 1;
  while(Bnum > 0) {
    Dnum = Dnum + ((i) * (Bnum % 10));
    Bnum = Bnum / 10;
    i = i * 2;
  } 
  return Dnum;
}

int main(){

  int Bnum;
  cout << "Please, enter the binary number: ";
  cin >> Bnum;

  int Dnum = decimalNum(Bnum);
  cout << "The binary number " << Bnum << " in decimal base number number system is " << Dnum << ".\n";
  return 0;
}