class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m)
        return false;
        vector<char>freq(26,0);
        for(char ch: s)
        {
            freq[ch-'a']++;
        }
        for(char c: t)
        {
            freq[c-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0)
            return false;
        }
        return true;
    }
};
