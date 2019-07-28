class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int areaA=(C-A)*(D-B);
        int areaB=(G-E)*(H-F);
        int overlap=0;
        int left=max(A,E);
        int right=min(C,G);
        int top=min(D,H);
        int bottom=max(B,F);
        if(bottom<top && left<right)
        {
            overlap=(top-bottom)*(right-left);
        }
        return areaA-overlap+areaB;
    }
};
