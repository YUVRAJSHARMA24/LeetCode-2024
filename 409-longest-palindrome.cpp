class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        int cnt = 0;

        if( n == 1) return 1;

        map<char, int> mp;
        for(auto ch : s)
        {
            mp[ch]++;
        }

        for(auto it : mp)
        {
            if((it.second) % 2 == 0){
                cnt += it.second;
            }
            else{
                cnt += it.second - 1;
            }
        }

        return cnt == n ? cnt : cnt+1;
    }
};
