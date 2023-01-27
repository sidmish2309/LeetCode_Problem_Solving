class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pre={1};
        vector<int>curr;
      for(int i=1; i<=rowIndex; i++)
      {
          curr.resize(i+1,1);
          for(int j=1; j<i; j++) curr[j]=pre[j]+pre[j-1];
          
          pre=curr;
      }
        return pre;
    }
};