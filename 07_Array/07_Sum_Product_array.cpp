#include <iostream>
using namespace std;

int addition(int arr[], int size){
  int sum = 0;
  for(int i = 0; i < size; i++){
    sum = sum + arr[i];
  }
  return sum;
}
int product(int arr[], int size){
  int mul = 1;
  for(int i = 0; i < size; i++){
    mul = mul*arr[i];
  }
  return mul;
}

int main(){
  int arr[] = {6, 4, 9, 5, 2};
  int size = 5;

  int sum = addition(arr, size);
  int mul = product(arr, size);

  cout << "The sum of all number in array is " << sum << ".\n";
  cout << "The product of all number in array is " << mul << ".\n";
}