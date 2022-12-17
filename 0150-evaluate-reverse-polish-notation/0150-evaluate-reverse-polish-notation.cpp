class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans=0;
        stack<long long> s;
        for(auto x:tokens)
        {
            if(x=="+" || x=="-" || x=="*" || x=="/")
            {
                long long p=s.top();
                s.pop();
                long long y=s.top();
                s.pop();
                if(x=="+") s.push(y+p);
                if(x=="-") s.push(y-p);
                if(x=="*") s.push(y*p);
                if(x=="/") s.push(y/p);
            }
            else s.push(stoi(x));
        }
        return (int)s.top();
    }
};