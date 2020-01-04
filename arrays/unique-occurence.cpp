// Approach: Store elements and their number of occurences in a std::map
// Iterate over values of map to see if occurence values are unique
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(int i:arr)
        {
            mp[i]++;
        }
        set<int> s;
              for(auto it=mp.begin();it!=mp.end();it++)
               {
                   if(s.find(it->second)!=s.end())
                   {
                       return false;
                   }
                  s.insert(it->second);
               }
               return true;
    }
};
