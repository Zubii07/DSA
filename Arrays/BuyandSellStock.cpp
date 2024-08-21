#include <iostream>
#include <algorithm> // For min function
#include <limits.h>  // For INT_MAX

using namespace std;

void maxprofit(int prices[], int n)
{
    int bestBuy[100000];
    bestBuy[0] = INT_MAX; // Correct initialization with INT_MAX

    for (int i = 1; i < n; i++) // Start loop from 1 to avoid out-of-bounds access
    {
        // first print best buy values
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
        cout << bestBuy[i] << ",";
    }
    // Now calculate profit on the bases of best buy
    int maxprofit = 0; // initialized to 0, when stock gets down
    for (int i = 0; i < n; i++)
    {
        int currprofit = prices[i] - bestBuy[i];
        maxprofit = max(maxprofit, currprofit);
    }
    cout<<endl;
    cout << "Max Profit  = " << maxprofit << endl;
}

int main()
{
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);
    maxprofit(prices, n);
    return 0;
}
// Time complexity: we used two loops so O(n+n) = O(2n) = O(n)