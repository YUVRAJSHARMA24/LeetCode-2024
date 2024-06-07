class Solution {
public:
    
    string solve(string &word, unordered_set<string> &set)
    {
        for(int i = 1; i<=word.size(); i++)
        {
            string root = word.substr(0, i);
            if(set.count(root))
            {
                return root;
            }
        }

        return word;
    }

    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> set(dictionary.begin(), dictionary.end());

        stringstream str(sentence);
        string word;
        string res;

        while(getline(str, word, ' '))
        {
            res += solve(word, set) + " ";
        }

        res.pop_back();
        return res;
    }
};
