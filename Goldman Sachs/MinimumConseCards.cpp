class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {

            int res = INT_MAX;
            unordered_map<int,int> m;
            int n = cards.size();
            for(int i = 0; i < n; i++)
            {
                if(m.find(cards[i]) != m.end())
                {
                    int val = i - m[cards[i]] + 1;
                    res = min(res,val);
                }

                m[cards[i]] = i;
            }
            if(res == INT_MAX)  return -1;
            return res;

    }
};