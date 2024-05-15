#include <iostream>
#include <vector>
using namespace std;

#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

long long mergeAndCount(vector<int> &arr, int left, int mid, int right) {
    // Create temporary vectors to hold the two halves
    vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);
    
    int i = 0, j = 0, k = left;
    long long invCount = 0;
    
    // Merge the two halves back into the original array
    while (i < leftArr.size() && j < rightArr.size()) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
            invCount += (leftArr.size() - i);
        }
    }
    
    // Copy any remaining elements
    while (i < leftArr.size()) {
        arr[k++] = leftArr[i++];
    }
    
    while (j < rightArr.size()) {
        arr[k++] = rightArr[j++];
    }
    
    return invCount;
}

long long mergeSortAndCount(vector<int> &arr, int left, int right) {
    long long invCount = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        invCount += mergeSortAndCount(arr, left, mid);
        invCount += mergeSortAndCount(arr, mid + 1, right);
        
        invCount += mergeAndCount(arr, left, mid, right);
    }
    return invCount;
}

int main() {
    boost
    string strSeq;
    while (getline(cin, strSeq) && strSeq[0] != '0') {
        vector<int> numbers;
        int len = 0;

        // Parse the input string
        for (int i = 0; i < strSeq.length(); i++) {
            string tempString = "";
            while (strSeq[i] != ' ' && i < strSeq.length())
                tempString += strSeq[i++];
            
            if (!tempString.empty()) {
                int newNumber = stoi(tempString);
                if (len == 0) {
                    len = newNumber;
                } else {
                    numbers.push_back(newNumber);
                }
            }
        }

        long long inversionCount = mergeSortAndCount(numbers, 0, numbers.size() - 1);

        cout << (inversionCount % 2 == 0 ? "Carlos" : "Marcelo") << "\n";
    }

    return 0;
}
