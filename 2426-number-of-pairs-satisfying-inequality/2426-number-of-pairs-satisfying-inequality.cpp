#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
using namespace  __gnu_pbds;
typedef tree<long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds; // datatype
 //less, greater, less_equal
 //Element at position-->*A.find_by_order()
 //count smaller elements--->A.order_of_key()
 //lower & upper bound-->*A.lower_bound()
  
class Solution {
public:
   long long numberOfPairs(vector<int>& num1, vector<int>& num2, int diff) {
      long long ans=0;
      
       int n=num1.size();
      
       vector<long long> v;
       pbds s;
       int A[n];
       for(int i=0; i<n; i++)
           A[i]=num1[i]-num2[i];
       
       
       for(int i=n-1; i>=0; i--)
       {
           long long k=A[i]-diff;
            
           long long z=s.order_of_key(k);
           v.push_back(z);
           long long num=n-i-1;
           ans+=max(0LL,num-z);
           s.insert(A[i]);
       }
       
       cout<<endl;
       for(auto x:v)
           cout<<x<<" ";
       return ans;
      
   }
};