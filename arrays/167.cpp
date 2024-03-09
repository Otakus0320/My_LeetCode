class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int x1 = 0, x2 = size(numbers)-1;
        while(x1 < x2)
        {
            int sum = numbers[x1] + numbers[x2];
            if(sum == target) return vector<int>{x1+1, x2+1};
            else if (sum < target) x1++;
            else x2--;
        }
        return vector<int>{x1+1, x2+1};
    }
};
