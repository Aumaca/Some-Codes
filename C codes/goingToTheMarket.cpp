#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// receive tests cases number
// each test has input of produtcts number
// each product input is string name and float price
// then input is int of which she wants to buy
// receive each product to buy, name and amount



int main() {
  int testCases;
  cin >> testCases;

  while (testCases--) {
    vector<string> productsAvailable;
    vector<float> prices;
    vector<string> productsToBuy;
    vector<float> amount;

    int nProducts;
    cin >> nProducts;
    while (nProducts--) {
      string tmpProdName;
      float tmpPrice;
      cin >> tmpProdName >> tmpPrice;
      productsAvailable.push_back(tmpProdName);
      prices.push_back(tmpPrice);
    }

    int nProductsToBuy;
    cin >> nProductsToBuy;
    while (nProductsToBuy--) {
      string tmpProdName;
      int tmpAmount;
      cin >> tmpProdName >> tmpAmount;
      productsToBuy.push_back(tmpProdName);
      amount.push_back(tmpAmount);
    }

    float total = 0;
    int prodIdx, toBuyIdx;
    prodIdx = toBuyIdx = 0;
    for (prodIdx = 0; prodIdx < productsAvailable.size() && toBuyIdx < productsToBuy.size(); prodIdx++) {
      if (productsAvailable[prodIdx] == productsToBuy[toBuyIdx]) {
        total += prices[prodIdx] * amount[toBuyIdx];
        toBuyIdx++;
        prodIdx = 0;
      }
    }

    printf("R$ %.2f\n", total);
  }

  return 0;
}