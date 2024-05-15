#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  
  while (getline(cin, s)) {
    int n = 0;
    for (int i = 0; i < s.length(); i++) {
      if (isalpha(s[i]) && n % 2 == 0) {
        s[i] = toupper(s[i]);
        n++;
      }
      else if (isalpha(s[i])) {
        s[i] = tolower(s[i]);
        n--;
      }

      cout << s[i];
    }

    cout << endl;
  }

  return 0;
}