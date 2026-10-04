class Solution {
public:

    int func(int number)
    {
        int sum = 0;

        while(number > 0)
        {
            int d = number % 10;
            sum += d * d;
            number = number / 10;
        }

        return sum;
    }

    bool isHappy(int n) 
    {
        set<int> st;

        while(n != 1)
        {
            if(st.count(n))
                return false;

            st.insert(n);

            n = func(n);
        }

        return true;
    }
};