class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();
        priority_queue<pair<double, pair<int, int>>, vector<pair<double, pair<int, int>>>, greater<>>pq;
        
        for(int i = 0; i<n-1; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                pq.push({(double)arr[i]/arr[j], {arr[i], arr[j]}});
            }
        }
        
        pair<int, int> ans;
        for(int i = 0; i<k; i++)
        {
            ans = pq.top().second;
            pq.pop();
        }

        return {ans.first, ans.second};
    }
};
