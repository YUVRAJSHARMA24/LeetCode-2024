class Solution {
public:
    
    bool solve(vector<int>& bloomDay, int mid, int k, int m)
    {
        int bouquets = 0;
        int days = 0;

        for(int i = 0; i<bloomDay.size(); i++)
        {
            if(bloomDay[i] <= mid){
                days++;
            }else{
                days = 0;
            }

            if(days == k){
                bouquets++;
                days = 0;
            }
        }

        return bouquets >= m ? true : false; 
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();

        int s = 0;
        int e= *max_element(bloomDay.begin(), bloomDay.end());

        int minDays = -1;

        while(s <= e)
        {
            int mid = s + (e-s)/2;

            if(solve(bloomDay, mid, k, m))
            {
                minDays = mid;
                e = mid-1;
            }
            else{
                s = mid + 1;
            } 
        }

        return minDays;
    }
};
