class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> s;for(int i:arr)
        {
            if(s.find(2*i)!=s.end()||(i%2==0&&s.find(i/2)!=s.end()))
            {
                return true;
            }
            s.insert(i);
        }
    return false;}
};
