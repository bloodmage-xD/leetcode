class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, max = 0;
        for (auto c : nums){
            if (c == 1)
                count++;
            else
                count = 0;
            if (count > max)
                max = count;
        }
        return max;
    }
};
