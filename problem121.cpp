#include <iostream>
#include <vector>
using namespace std;
 int maxProfit(vector<int>& prices) {
       int best = prices[0];
       int profit = 0;
       for (int i =1;i<prices.size();i++){
       if (prices[i]>best){
        profit = max(profit,prices[i]-best);
       }
       best = min(best,prices[i]);
       }

       return profit; 
    }
int main() {
    vector<int>stock = {7,1,5,3,6,4};
    cout<<maxProfit(stock);
    return 0;
}