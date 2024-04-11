#include <algorithm>
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> table = vector<int>(amount + 1, -2);;
        for(int i=0; i<amount; i++) table[i]=-2;
        return cal(coins, table, amount);
    }

    int cal(vector<int>& coins, vector<int>& arr, int amount)
    {
        if(amount == 0) return 0;
        if(amount < 0) return -1;
        int ans = 999999999;
        if(arr[amount] != -2) return arr[amount];

        for(int i=0; i<coins.size(); i++)
        {
            int small_qs = cal(coins, arr, amount-coins[i]);
            if(small_qs == -1) continue;
            if(ans >= small_qs+1)
            {
                ans = small_qs+1;
            }
        }
        arr[amount] = (ans == 999999999 ? -1: ans);
        return arr[amount];
    }
};
