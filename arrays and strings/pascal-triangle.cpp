class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows==0)
        {
            return res;
        }

        res.push_back({1});
        if(numRows==1)
        {
            return res;
        }

        res.push_back({1,1});
        if(numRows==2)
        {

            return res;
        }

        vector<int> temp=res[1];
        for(int i=3;i<=numRows;i++)
        {
            r.clear();
            r.push_back(1);
            for(int i=0;i<temp.size()-1;i++)
            {
                r.push_back(temp[i]+temp[i+1]);
            }
            r.push_back(1);
            res.push_back(r);
            temp=r;
        }
        return res;
    }

};
