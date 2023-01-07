/*
    Whenever asked about the number of something having equal something try using maps

    Here we are asked two point from the point having equal distance 
    collect all such points (n) and then nP2 will be our answer. 
*/



class Solution {
public:

    int dis(vector<int> a,vector<int> b)
    {
        return pow((a[0]-b[0]),2) + pow((a[1]-b[1]),2);
    }
    
    int numberOfBoomerangs(vector<vector<int>>& p) {
        
        int n = p.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            unordered_map<long,int> m;
            for(int j = 0; j < n; j++)
            {
                if(j == i)  continue;
                int val = dis(p[i],p[j]);
                m[val]++;
            }
            for(auto x: m)
            {
                int t = x.second;
                if(t > 1)
                {
                    ans += t*(t-1);
                }
            }
        }
        return ans;

    }
};