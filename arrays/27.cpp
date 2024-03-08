class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0, fast = 0;
        int length = size(nums);
        for(int i = 0; i<length; i++)
        {
            if(nums[fast] != val)
            {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};
