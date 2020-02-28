class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<bool> f(n,false);
        int p=0;
        return helper(0,p,f,leftChild,rightChild)&&p==n;
    }

    bool helper(int i,int &p,vector<bool> &f, vector<int> &left,vector<int> &right)
    {


        if(i==-1)
        {
            return true;
        }
        if(f[i]==true)
        {
            return false;
        }
        f[i]=true;
        p++;
        return helper(left[i],p,f,left,right)&&helper(right[i],p,f,left,right);
    }
};
