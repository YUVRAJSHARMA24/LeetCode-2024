class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        long int mod = 1e9 + 7;

        priority_queue<int, vector<int>, greater<int>> pq;

        for(int num : nums){
            pq.push(num);
        }

        long int i = 0;
        while(i < k)
        {
            int num = pq.top();
            pq.pop();
            pq.push(num + 1);
            i++;
        }

        long int res = 1;
        while(!pq.empty())
        {
            res  = (res*pq.top()) %mod;
            pq.pop();
        }

        return res%mod;
    }
};
