class Solution {
public:

    int hours(vector<int>& piles, int h)
    {
        int  totalhrs=0;
        for(int i=0;i<piles.size();i++)
        {
            totalhrs+=(piles[i]+h-1)/h;
        }
        return totalhrs;

    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int total=0;
        int ans=0;
        while(low<=high)
        {
            int mid= low+(high-low)/2;
            total= hours(piles,mid);
            if(total<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
    }
};