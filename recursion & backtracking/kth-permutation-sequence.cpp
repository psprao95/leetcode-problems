class Solution {
    int count=0;
    vector<int> res;
public:
    string getPermutation(int n, int k) {
        vector<int> r;


        set<int> s;
        for(int i=1;i<=n;i++)
        {
            helper(r,i,k,n,s);
        }
        string sr="";
        for(int i:res)
        {
            sr+=to_string(i);
        }
        return sr;
    }


    void helper(vector<int> &r,int i,int k,int n,set<int> &s)
    {
        r.push_back(i);
        s.insert(i);
        if(r.size()==n)
        {
            count++;
            if(count==k)
            {
                res=r;

            }
            if(count>=k)
            {
                return;
            }

        }

        int temp;
        for(int j=1;j<=n;j++)
        {

            if(s.find(j)==s.end())
            {

                helper(r,j,k,n,s);


            }
        }
        r.pop_back();
        s.erase(i);

    }



};
