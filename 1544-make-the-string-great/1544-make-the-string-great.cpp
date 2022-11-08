class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;
        string ans;
        for(int i=0; i<s.length(); i++)
        {
               
              if(stk.empty()|| (stk.top()-s[i] != 32 && s[i]-stk.top() != 32)) stk.push(s[i]); // push the character if the stack is empty or in the pair of consecutive characters one is uppercase of the other
            else stk.pop(); // difference of ASCII value of lowercase from its uppercase is 32
        }
               
               while(!stk.empty())
               {
                   ans+=stk.top();
                   stk.pop();
               }
               
               reverse(ans.begin(),ans.end());
               return ans;
    }
};