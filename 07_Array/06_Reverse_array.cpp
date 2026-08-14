#include <iostream>
using namespace std;

void reverse_array(int arr[], int size){
  int temp;
  for(int i = 0; i < size/2; i++){
    temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = temp;
  }
  return;
}
int main(){
  int arr[] = {2, 5, 3, 7, 4, 9, 6};
  int size = 7;

  reverse_array(arr, size);
  cout << "The reverse array is ";
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  return 0;
}