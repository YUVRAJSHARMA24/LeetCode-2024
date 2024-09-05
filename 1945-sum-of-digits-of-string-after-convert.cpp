class Solution {
public:
    int getLucky(string s, int k) {
        int n = s.size();
        string str = "";
        for(auto ch : s)
        {
            str += to_string(ch - 'a' + 1);
        }

        while(k > 0)
        {
            int temp = 0;
            
            for(auto x : str)
            {
                temp += x - '0';
            }

            str = to_string(temp);
            k--;
        }

        return stoi(str);
    }
};
