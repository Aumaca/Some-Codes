#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Raju sorts and count each constexpr
// n number of marbles
// q number of queries
// next n lines are numbers written in marbles

int main() {
  int nCase = 1;
  int n, q;
  while (cin >> n >> q && n != 0 && q != 0) {
    vector<int> array;
    vector<int> queries;
    
    int aux = n;
    while (aux--) {
      int val;
      cin >> val;
      array.push_back(val);
    }
    aux = q;
    while (aux--) {
      int val;
      cin >> val;
      queries.push_back(val);
    }

    sort(array.begin(), array.end());

    printf("CASE# %d:\n", nCase);
    for (int i = 0; i < q; i++) {
      int idxFound = -1;
      for (int j = 0; j < n; j++) {
        if (array[j] == queries[i]) {
          idxFound = j + 1;
          break;
        }
      }

      if (idxFound != -1)
        printf("%d found at %d\n", queries[i], idxFound);
      else
        printf("%d not found\n", queries[i]);
    }

    nCase++;
  }
    
    
  return 0;
}