class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n=distance.size();
        int s=min(start,destination);
        int d=max(start,destination);
        int clockwise=0,total=0;
        for(int i=0;i<n;i++)
        {
            if(i>=s&&i<d)
            {
                clockwise+=distance[i];
            }
            total+=distance[i];
        }
        return min(clockwise,total-clockwise);
    }
};
