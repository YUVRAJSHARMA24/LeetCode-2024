class Solution {
public:
    
    void fillCount(string& str, int count[26])
    {
        for(auto &ch : str)
        {
            count[ch - 'a']++;
        }
    }

    vector<string> commonChars(vector<string>& words) {
        int n = words.size();

        int count[26] = {0};

        fillCount(words[0], count);

        for(int i = 1; i<n; i++)
        {
            int temp[26] = {0};

            fillCount(words[i], temp);

            for(int i = 0; i<26; i++)
            {
                count[i] = min(count[i], temp[i]); 
            }
        }

        vector<string> ans;
        for(int i = 0; i<26; i++)
        {
            if(count[i] != 0)
            {
                int c = count[i];
                while(c--)
                {
                    ans.push_back(string(1, i+'a'));
                }
            }
        }

        return ans;
    }
};
