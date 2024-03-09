class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = size(s)-1;
        while(left < right)
        {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
};
