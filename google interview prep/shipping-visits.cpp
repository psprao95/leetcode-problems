class Solution {
public:
  // weights[i]: destination port of container i
  // n: number of containers
  // m: number of destinations
  // x: capacity of containers by weight
  // y: capacity of the ship  by containers
    int shippingVisits(vector<int>& weights, int n, int m,int x,int y) {

        int res=0,cur_weight,cur_num;
        while(i<n)
        {
          res++;
          s.clear();
          cur_weight=0;
          cur_num=0;
          while(i<n && cur_weight+weights[i]<=x && cur_num<y)
            {
              cur_weight+=weights[i];
              cur_num++;

              if(s.contains(weights[i])==s.end())
              {
                s.insert(weights[i]);
                res++;
              }
              i++;
            }


        }


        return res;


    }
};
