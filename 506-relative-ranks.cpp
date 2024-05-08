class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>>pq;
        int n = score.size();

        for(int i = 0; i<n; i++)
        {
            pq.push({score[i], i});
        }

        vector<string> ans(n);
        int pos = 1;
        while(!pq.empty())
        {
            int ind = pq.top().second;
            pq.pop();

            if(pos == 1) ans[ind] = "Gold Medal";
            else if(pos == 2) ans[ind] = "Silver Medal";
            else if(pos == 3) ans[ind] = "Bronze Medal";
            else ans[ind] = to_string(pos);

            pos++;
        }

        return ans;
    }
};
