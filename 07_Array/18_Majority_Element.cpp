#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums){
  int size = nums.size();
  for(int value : nums){
    int frequency = 0;
    for(int element : nums){
      if(value == element){
        frequency++;
      }
    }
    if(frequency > size/2){
      return value;
    }
  }
  return -1;
}

int main(){
  vector<int> nums = {2, 2, 1, 1, 1};
  int result = majorityElement(nums);
  if(result == -1){
    cout << "No majority element" << endl;
  }
  else{
    cout << "Majority element is " << result << "." << endl;
  }
  return 0;
}

// Brute force approach