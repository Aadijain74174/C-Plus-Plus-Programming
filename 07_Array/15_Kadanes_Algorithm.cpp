#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n = 5;
  int arr[5] = {1, 2, 3, 4, 5};

  int currSum = 0;
  int maxSum = INT_MIN;
  for(int i = 0; i < n; i++){
    currSum += arr[i];
    maxSum = max(maxSum, currSum);
    if(currSum < 0){
      currSum = 0;
    }
  }

  cout << "Max Subarrray Sum = " << maxSum << endl;
  return 0;
}