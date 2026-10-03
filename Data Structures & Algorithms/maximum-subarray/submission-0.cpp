class Solution {
public:
    int maxSubArray(vector<int>& nums) {
          int maxii=INT_MIN;
          int n=nums.size();
          int sum=0;
          for(int i=0;i<n;i++)
          {
            sum+=nums[i];

            maxii= max(maxii,sum);

            if(sum<0)
            {
                sum=0;
            }
          }
          return maxii;
    }
};
