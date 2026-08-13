#include <iostream>
using namespace std;
int main(){
  float x, y;
  cout << "Please, enter the distance of point x from origin: ";
  cin >> x;
  cout << "Now, enter the distance of point y form origin: ";
  cin >> y;

  if(x == 0 && y == 0){
    cout << "The point is at the origin.";
  } else if(x == 0){
    cout << "The point lies on the y-axis.";
  } else if(y == 0){
    cout << "The point lies on the x-axis.";
  } else if(x > 0){
    if(y > 0){
      cout << "The point lies in 1st quadrant.";
    } else{
      cout << "The point lies in 4th quadrant.";
    }
  } else{
    if(y > 0){
      cout << "The point lies in 2nd quadrant.";
    } else{
      cout << "The point lies in 3rd quadrant.";
    }
  }

  return 0;
}