/*
Just apply brute force
just match the slopes
             if points (x1,y1) and (x2,y2) then slope of the line passing 
             through them  = (y2-y1) / (x2-x1)
             Similary we will check with other points (x,y) that the if lies in the 
             straight line with that chosen line
             (y2-y1)/(x2-x1) = (y-y1) / (x-x1)
             (x-x1) * (y2-y1) = (y-y1) * (x2-x1);

Using Hash 
We will Hash all the slopes that can be formed using the point and then check how many of them have equal slopes


*/


class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
           
            int n = points.size();
            int ans = 1;
            for(int i = 0; i < n; i++)
            {
                for(int j = i + 1; j < n; j++)
                {
                    int x1 = points[i][0];
                    int y1 = points[i][1];
                    int x2 = points[j][0];
                    int y2 = points[j][1];
                    int total = 2;
                    for(int k = 0; k < n; k++)
                    {
                        if(k != i && k != j)
                        {
                            int x = points[k][0];
                            int y = points[k][1];
                            if((x-x1)*(y2-y1) == (y-y1)*(x2-x1))
                            {
                                total++;
                            }
                        }
                    }
                    ans = max(ans,total);
                }
            }
            return ans;
    }
};


/*

Using Hash 
We will Hash all the slopes that can be formed using the point and then check how many of them have equal slopes
            

*/