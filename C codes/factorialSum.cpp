#include <iostream>

using namespace std;

int main() {
  unsigned long int a, b;
  while (cin >> a >> b) {
    unsigned long int resultA, resultB;
    resultA = resultB = 1;

    for (int i = 1; i <= a; ++i)
      resultA *= i;

    for (int i = 1; i <= b; ++i)
      resultB *= i;

    resultA += resultB;

    cout << resultA << endl;
  }

  return 0;
}