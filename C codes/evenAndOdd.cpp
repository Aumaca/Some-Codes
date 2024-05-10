#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    std::cin >> n;

    std::vector<int> odd;
    std::vector<int> even;

    for (int i = 0; i < n; i++) {
        int input;
        std::cin >> input;

        if (input % 2 == 0) {
            even.push_back(input);
        } else {
            odd.push_back(input);
        }
    }

    std::sort(even.begin(), even.end());
    std::sort(odd.begin(), odd.end(), greater<int>());

    for (int num : even) {
        std::cout << num << "\n";
    }

    for (int num : odd) {
        std::cout << num << "\n";
    }

    return 0;
}
