class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int sum=0;
         int maxii= INT_MIN;

         for(int i=0;i<nums.size();i++)
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
