class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());

        int m=s1.size();
        int n=s2.size();
        for(int i=0;i<=n-m;i++)
        {
            string temp= s2.substr(i,m);
            sort(temp.begin(),temp.end());
            if(s1==temp)
            return true;
        }
        return false;
    }
};
