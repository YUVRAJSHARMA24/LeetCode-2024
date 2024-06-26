class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size(), s = 0, e = n-1, count = 0;
        while(s <= e)
        {
            if(people[s] + people[e] <= limit)
            {
                s++;
                e--;
            }
            else
                e--;
            
            count++;
        }
        
        return count;
    }
};
