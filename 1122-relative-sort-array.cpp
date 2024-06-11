class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;

        for(auto num : arr1)
        {
            mp[num]++;
        } 
        
        int j = 0;
        for(auto &num : arr2)
        {
            while(mp[num] > 0)
            {
                arr1[j++] = num;
                mp[num]--;
            }
        }

        for(auto& it : mp)
        {
            int freq = it.second;

            while(freq > 0)
            {
                arr1[j++] = it.first;
                freq--;
            }
        }

        return arr1;
    }
};
