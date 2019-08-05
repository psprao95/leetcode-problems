class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {


        vector<int> res(num_people,0);
        int i=0,k=0;
        while(candies)
        {
            k++;
            if(candies>=k)
            {
                candies-=k;
                res[i]+=k;
            }
            else
            {
                res[i]+=candies;candies=0;

            }
            i=(i+1)%num_people;

        }
        return res;
    }
};
