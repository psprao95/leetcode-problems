class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity1,int capacity2) {
        int n=plants.size();
        int i=0;
        int j=n-1;
        int refills=0;
        int can1=0;
        int can2=0;

        while(i<j)
        {
          if(can1<plants[i])
          {
            refills++;
            can1=capacity1;
          }

          can1-=plants[i];
          i++;

          if(can2<plants[j])
          {
            refills++;
            can2=capacity2;
          }

          can2-=plants[j];
          j--;
        }

        if(i==j && can1+can2<plants[i])
        {
          return refills+1;
        }
        return refills;


    }
};
