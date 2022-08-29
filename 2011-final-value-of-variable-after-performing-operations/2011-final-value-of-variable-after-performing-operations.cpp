class Solution {
public:
    int finalValueAfterOperations(vector<string>& A) {
       int x=0;
        for(int i=0; i<A.size(); i++)
        {
            if(A[i]=="++X" || A[i]=="X++")
                x++;
            else x--;
        }
        return x;
    }
};