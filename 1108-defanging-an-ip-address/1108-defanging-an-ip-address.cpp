class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.length();
        string a="";
        for(int i=0; i<n; i++)
        {
            if(address[i]=='.')
                a+="[.]";
            else
                a+=address[i];
        }
       
        return a;
    }
};