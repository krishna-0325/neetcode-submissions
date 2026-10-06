class Solution {
public:
    bool canJump(vector<int>& nums) {
  int n=nums.size();
  int sum=0;
  for(int i=0;i<n;i++)
  {
    if(i>sum) return false;

    sum = max(sum,i+nums[i]);

    if(sum>=n)
    return true;
  }
  return true;
    }
};
