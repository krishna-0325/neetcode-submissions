class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0;
        int j=n-1;
        int maxii=INT_MIN;
        while(i<=j)
        {
            int area= min(heights[i],heights[j])*(j-i);
            maxii=max(maxii,area);
           if(heights[i]<heights[j])
           {
            i++;
           }
           else
           {
            j--;
           }
        }
        return maxii;
    }
};
