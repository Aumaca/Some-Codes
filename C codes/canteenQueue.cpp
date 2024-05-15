#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int tests;
  cin >> tests;
  vector<int> a, b;

  while (tests--) {
    a.clear();
    b.clear();

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      a.push_back(temp);
      b.push_back(temp);
    }

    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());

    int counter = 0;
    for (int i = 0; i < n; i++) 
      if (a[i] == b[i])
        counter++;

    cout << counter << endl;
  }

  return 0;
}