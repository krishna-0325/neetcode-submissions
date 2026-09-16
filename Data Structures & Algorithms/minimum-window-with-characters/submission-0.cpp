class Solution {
public:
    string minWindow(string s, string t) {

        if (t.size() > s.size())
            return "";

        vector<int> need(128, 0);
        vector<int> have(128, 0);

        for (char ch : t) {
            need[ch]++;
        }

        int l = 0;
        int count = 0;

        int minLen = INT_MAX;
        int start = 0;

        for (int r = 0; r < s.size(); r++) {

            have[s[r]]++;

            if (have[s[r]] <= need[s[r]]) {
                count++;
            }

            while (count == t.size()) {

                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }

                have[s[l]]--;

                if (have[s[l]] < need[s[l]]) {
                    count--;
                }

                l++;
            }
        }

        if (minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};