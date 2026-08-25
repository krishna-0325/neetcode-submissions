class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxarea=0;
        stack<int>st;
        int n=heights.size();
        for(int i=0;i<=n;i++)
        {
            while(!st.empty() && (i==n || heights[st.top()]>=heights[i]))
            {
                int height= heights[st.top()];
                st.pop();

                int right=i;
                int left;
                if(st.empty())
                left=-1;
                else
                left=st.top();
                int width= right-left-1;
                maxarea= max(maxarea,height*width);
            }
st.push(i);
        }
        return maxarea;
    }
};
