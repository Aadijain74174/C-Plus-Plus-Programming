#include <iostream>
#include <iomanip> // Required for setw
using namespace std;

long long factorial(int x){
    long long fac = 1;
    for(int i = 1; i <= x; i++){
        fac = fac * i;
    }
    return fac;
}

int ncr(int n , int r){
    long long combination = factorial(n) / (factorial(r) * factorial(n-r));
    return combination;
}

int main(){
    int n;
    cout << "Please, enter n: ";
    cin >> n;
    
    for(int i = 0; i <= n; i++){
        // Print leading spacing for symmetry
        for(int j = 0; j <= n - i - 1; j++){
            cout << "   "; 
        }
        
        for(int j = 0; j <= i; j++){
            // Use setw to ensure each number gets exactly 6 spaces
            cout << setw(6) << ncr(i, j);
        }
        cout << endl;
    }
    return 0;
}