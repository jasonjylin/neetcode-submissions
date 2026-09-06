class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;

        unordered_map<string, vector<string>> pr;

        for (const auto& str : strs) {
            string key = "";
            int counts[26]{};

            for (const auto& c : str) {
                counts[c - 'a'] += 1;
            }

            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(counts[i]);
            }

            pr[key].push_back(str);
        }

        for (auto& [a, b] : pr) {
            vector<string> temp;
            for (auto& s : b) {
                temp.push_back(s);
            }

            res.push_back(temp);
        }

        return res;
    }
};