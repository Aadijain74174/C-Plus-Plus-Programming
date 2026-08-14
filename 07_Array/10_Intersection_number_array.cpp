#include <iostream>
using namespace std;

void print_intersection(int arr1[], int size1, int arr2[], int size2){
  for(int i = 0; i < size1; i++){
    int j;
    for(j = 0; j < size2; j++){
      if(arr1[i] == arr2[j]){
        cout << "The intersection number is " << arr1[i] << endl;
        break;
      }
    }
  }
  return;
}
int main(){
  int arr1[] = {2, 4, 3, 7, 5};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);
  int arr2[] = {1, 3, 6, 7};
  int size2 = sizeof(arr2) / sizeof(arr2[0]);

  print_intersection(arr1, size1, arr2, size2);
  return 0;
}