class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arr;
        arr = heights;
        sort(arr.begin(), arr.end());
        int cnt = 0;
        
        for(int i = 0; i<heights.size(); i++)
        {
            if(heights[i] != arr[i]) cnt++;
        }

        return cnt;
    }
};
