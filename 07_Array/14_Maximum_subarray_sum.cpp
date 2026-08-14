#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n = 5;
  int arr[5] = {1, 2, 3, 4, 5};

  int maxSum = INT_MIN;
  for(int st = 0; st < n; st++){
    int CSum = 0;
    for(int end = st; end < n; end++){
      CSum += arr[end];
      maxSum = max(CSum, maxSum);
    }
  }

  cout << "Max subarray sum = " << maxSum << endl;
  return 0;
}

// Brute Force Approach