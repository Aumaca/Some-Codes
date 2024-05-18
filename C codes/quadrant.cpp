#include <iostream>

using namespace std;

int main() {
  int x, y;
  while (cin >> x >> y && x != 0 && y != 0) {
    if (x >= 0 && y >= 0)
      cout << "primeiro\n";
    else if (x >= 0 && y <= 0)
      cout << "quarto\n";
    else if (x <= 0 && y <= 0)
      cout << "terceiro\n";
    else
      cout << "segundo\n";
  }

  return 0;
}