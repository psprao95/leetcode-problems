class Solution {
public:
    string dayOfWeek(string ,int k) {
      vector<string> days{"MOn","Tue","Wed","Thu","Fri","Sat","Sun"};
      for(int i=0;i<7;i++)
      {
        map.insert(pair<string,int>(days[i],i));
      }


        return days[(p[s]+k)%7)];
    }


};
