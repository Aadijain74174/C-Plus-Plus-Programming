#include <iostream>
using namespace std;

void swapping(int arr[], int size){
  int min_idx = 0;
  int max_idx = 0;
  for(int i = 0; i < size; i++){
    if(arr[i] < arr[min_idx]){
      min_idx = i;
    }
    if(arr[i] > arr[max_idx]){
      max_idx = i;
    }
  }
  swap(arr[min_idx], arr[max_idx]);
  return;
}

int main(){
  int arr[] = {2, 4, 5, 7, 8};
  int size = 5;

  swapping(arr, size);
  cout << "After swap max & min number in array:\n";
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  return 0;
}