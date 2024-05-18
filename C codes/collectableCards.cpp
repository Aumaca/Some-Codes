#include <iostream>

using namespace std;

// input test cases
// input <= 1000 of two numbers that indicate the amount to change

int main() {
  int testCases;
  cin >> testCases;

  while (testCases--) {
    int a, b;
    cin >> a >> b;

    int mdc = 1;
    while (a != 1 && b != 1) {
      int i = 2;
      while (!(a % i == 0 || b % i == 0)) {
        i++;
      }

      if (a % i == 0 && b % i == 0) {
        mdc *= i;
        a /= i;
        b /= i;
      }
      else if (a % i == 0) {
        a /= i;
      }
      else {
        b /= i;
      }      
    }

    cout << mdc << "\n";
  }

  return 0;
}