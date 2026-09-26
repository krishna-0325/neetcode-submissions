class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>st;
        for(int i: nums)

        {
            if(st.find(i)!=st.end())
            return i;
            else
            st.insert(i);
        }
        return -1;
        
    }
};
