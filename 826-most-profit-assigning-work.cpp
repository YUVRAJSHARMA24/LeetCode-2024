class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size(), m = worker.size();
        vector<pair<int, int>> p;

        for(int i = 0; i<n; i++)
        {
            p.push_back({difficulty[i], profit[i]});
        }

        sort(p.begin(), p.end());
        sort(worker.begin(), worker.end());
        int ans = 0;

        int i = 0, j = 0, maxi = 0;
        while(j < m)
        {
            while(i < n && p[i].first <= worker[j])
            {
                maxi = max(maxi, p[i].second);
                i++;
            }

            ans += maxi;
            j++;
        }

        return ans;
    }
};
