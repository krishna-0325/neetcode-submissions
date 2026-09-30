class KthLargest {
public:
priority_queue<int,vector<int>,greater<int>>pq;
int j;
    KthLargest(int k, vector<int>& nums) {
       j=k;
        for(int i: nums)
        {
            pq.push(i);
        
        while(pq.size()>j)
        {
            pq.pop();
        }
        }
    }
    
    int add(int val) {
    pq.push(val);

    while(pq.size()>j)
    {
        pq.pop();
    }
    return pq.top();
    }
};
