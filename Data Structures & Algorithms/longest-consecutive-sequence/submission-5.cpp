class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int longest=1;
        int count=1;
            if(n == 0)
            return 0;
        
      for(int i=1;i<n;i++)
      {
        if(nums[i-1]==nums[i])
        continue;
        else  if(nums[i]==nums[i-1]+1)
        {
            count++;
        }
        else{

        
        longest=max(longest,count);
        count=1;
       
        }
      
      }
      longest=max(longest,count);
      return longest;
    }
};
