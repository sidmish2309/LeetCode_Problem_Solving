class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0; i<s.size(); i++)
        {
            string g=s.substr(i) + s.substr(0,i);
            cout<<g<<endl;
            if(g==goal) return true;
        }
        return false;
    }
};