class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int low=0;
        int high=n-1;
        int lmax=0;
        int rmax=0;
        int ans=0;
        while(low<high)
        {
            if(height[low]<height[high])
            {
                if(height[low]>lmax)
                {
                    lmax=height[low];
                }
                else
                {
                    ans+=lmax-height[low];
                }
                low++;
            }
            else
            {
                if(height[high]>rmax)
                {
                    rmax=height[high];
                }
                else
                {
                    ans+=rmax-height[high];
                }
                high--;
            }
        }
       return ans;
    }
};
