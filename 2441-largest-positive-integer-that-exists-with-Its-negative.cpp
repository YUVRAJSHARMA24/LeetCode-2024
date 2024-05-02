class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0, j = n-1;

        while(i < j)
        {
            if(nums[i] + nums[j] == 0) return nums[j];
            else if(nums[i] + nums[j] < 0) i++;
            else j--;
        }

        return -1;
    }
};
