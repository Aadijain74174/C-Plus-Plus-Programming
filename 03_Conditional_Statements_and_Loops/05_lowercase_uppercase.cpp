#include <iostream>
using namespace std;

int main(){
  char ch;
  cout <<"Please, enter the character: ";
  cin >> ch;

  if(ch >= 'a' && ch <= 'z'){
    cout <<"Your entered character is written in lowercase.\n";
  } else {
    cout <<"Your entered character is written in uppercase.\n";
  }
  
  if(ch >= 97 && ch <= 122){
    cout <<"Your entered character is written in lowercase.\n";
  }
  
  if(ch >= 65 && ch <= 90){
    cout <<"Your entered character is written in uppercase.\n";
  }

  return 0;
}