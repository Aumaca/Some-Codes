#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// get n cases
// get each input 
// for each word, split them in space and then sort

bool compareByLength(const string &a, const string &b) {
  return a.length() > b.length();
}

int main() {
  int n;
  cin >> n;
  cin.ignore();

  while (n--) {
    string input;
    string newInput = "";
    vector<string> strings;
    getline(cin, input);
    for (char c : input) {
      if (c != ' ') {
        newInput += c;
      }
      else if (newInput.length() > 0) {
        strings.push_back(newInput);
        newInput = "";
      } 
    }
    if (newInput.length() > 0)
      strings.push_back(newInput);
    stable_sort(strings.begin(), strings.end(), compareByLength);
    for (int i = 0; i < strings.size(); i++) {
      if (i > 0) cout << ' ';
      cout << strings[i];
    }
    cout << endl;
  }

  return 0;
}
