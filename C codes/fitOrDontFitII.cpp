#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();

  while (n--) {
    string a, b;
    cin >> a >> b;

    int a_length = a.length();
    int b_length = b.length();

    bool fits = true;
    if (a_length < b_length) 
      fits = false;
    else {
      int bCounter = b_length - 1;
      int aCounter = a_length - 1;
      while (bCounter >= 0) {
        if (a[aCounter] != b[bCounter]) {
          fits = false;
          break;
        }
        aCounter--; 
        bCounter--;
      }
    }

    if (fits)
      cout << "encaixa" << endl;
    else
      cout << "nao encaixa" << endl;
  }
  return 0;
}
