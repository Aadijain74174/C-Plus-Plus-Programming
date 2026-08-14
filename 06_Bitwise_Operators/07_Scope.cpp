#include <iostream>
using namespace std;

int z = 10; // global
void fun(){
  int x = 10; // x only use in fun function it is local scope
}
int main(){

  if(3 > 1){
    int x = 10; // x only use in if condition it is local scope
    cout << z << endl;
  }

  return 0;
}