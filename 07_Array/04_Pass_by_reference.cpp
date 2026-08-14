#include <iostream>
using namespace std;

void changeArr(int arr[], int size){
  cout << "\nIn change array function\n";
  for(int i = 0; i < size; i++){
    arr[i] = 2 * arr[i];
    cout << arr[i] << " ";
  }
  return;
}

int main(){
  int arr[] = {1,2,3};

  cout << "Before calling function, In main function" << endl;
  for(int i = 0; i < 3; i++){
    cout << arr[i] << " ";
  }
  changeArr(arr, 3);

  cout << "\nAfter calling function, In main function\n";
  for(int i = 0; i < 3; i++){
    cout << arr[i] << " ";
  }
  return 0;
}