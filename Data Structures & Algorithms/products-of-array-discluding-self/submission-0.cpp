class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
int n=nums.size();
vector<int>ans(n,1);
int pre=1;
for(int i=0;i<n;i++)
{  ans[i]=pre;
pre*=nums[i];

}
int suff=1;
for(int j=n-1;j>=0;j--)
{
    ans[j]*=suff;
    suff*=nums[j];
}
return ans;
    }
};
