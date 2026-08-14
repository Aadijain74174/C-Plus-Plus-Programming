#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int x){
  for(int i = 0; i < size; i++){
   if(arr[i] == x){
     return i;
   }
  }
  return -1;
}
int main(){
  int arr[] = {4, 2, 8, 2, 1, 5, 6};
  int size = 7;
  int x = 5;
  int result = linear_search(arr, size, x);
  (result == -1) ? cout <<"The target element is not found in the array."
                 : cout <<"The target element is found at index " << result << " in the array.\n";
  return 0;
}