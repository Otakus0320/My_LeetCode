class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        if(length == 0) return 0;
        int slow = 0, fast = 0;
        while(fast < length)
        {
            if(nums[slow] != nums[fast])
            {
                slow++;
                nums[slow] = nums[fast];
            }
            fast++;
        }
        return slow + 1;
    }
};
