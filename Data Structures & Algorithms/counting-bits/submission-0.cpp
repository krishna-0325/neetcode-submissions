class Solution {
public:
int countbit(int number)
{
    int cnt=0;
    while(number)
    {
        number= number & (number-1);
        cnt++;
    }
    return cnt;
}
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++)
        {
          ans.push_back(countbit(i));
        }
        return ans;
    }
};
