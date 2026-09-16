class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=0;
        int longest=-1;
        if(n==0)
        return 0;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]==nums[i])
            continue;
            else if(nums[i-1]+1==nums[i])
            {
                cnt++;
            }
            else
            {
                longest=max(longest,cnt);
                cnt=0;
            }

        }
longest= max(longest,cnt);
return longest+1;
    }
};
