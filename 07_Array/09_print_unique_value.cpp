#include <iostream>
using namespace std;

void unique_value(int arr[], int size){
  for(int i = 0; i < size; i++){
    int j;
    for(j = 0; j < i; j++){
      if(arr[i] == arr[j]){
        break;
      }
    }

    if(i == j) {
      cout << arr[i] << " ";
    }
  }
}
int main(){
  int arr[] = {3, 5, 2, 8, 5, 9, 3};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << "Unique values is : ";
  unique_value(arr, size);
  return 0;
}