/*
    https://leetcode.com/problems/bulls-and-cows/description/

    Solution : 
*/


string getHint(string s, string g) {
        
        int n = (int)s.size();

       int cncp = 0;

        // Number of Bulls : Correct Number at correct position
        for(int i = 0; i < n; i++)
        {
            if(s[i] == g[i])
            {
                cncp++;
            }
        }
        
        //Number of Cows : Number is correct but at wrong position
        map<int,int> m1,m2;
        for(int i = 0; i < n; i++)
        {
            m1[s[i]]++;
            m2[g[i]]++;
        }
        int totalMatching = 0;
        for(auto secretChar : m1)
        {
            if(m2.find(secretChar.first) != m2.end())
            {
                totalMatching += min(m2[secretChar.first],secretChar.second);
            }
        }
        string ans = "";
        ans += to_string(cncp);
        ans.push_back('A');
        ans += to_string(totalMatching-cncp);
        ans.push_back('B');
        return ans;
    }