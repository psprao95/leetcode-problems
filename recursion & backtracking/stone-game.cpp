class Solution {
    int alex=0,lee=0;
    vector<int> piles;
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        this->piles=piles;
        return helper(0,n-1,0,0);
    }

    bool helper(int i, int j, int alex, int lee)
    {
        if(j==i-1)
        {
            return true;
        }

        return helper(i+1,j-1,alex+max(piles[i],piles[j]), lee+min(piles[i],piles[j])) ||
            helper(i+2,j, alex+max(piles[i],piles[i+1]), lee+min(piles[i],piles[i+1])) ||
            helper(i,j-2, alex+max(piles[i],piles[j-1]), lee+min(piles[j],piles[j-1]));
    }
};
