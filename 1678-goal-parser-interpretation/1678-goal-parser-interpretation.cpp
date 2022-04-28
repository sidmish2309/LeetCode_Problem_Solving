class Solution {
public:
    string interpret(string command) {
        string s=command;
       string a="";
        int n=command.length();
        int p=0;
        for(int i=0; i<n; )
        {
            if(command[i]=='G')
            {
                a+='G';
                i++;
            }
                
            else
            {
                if(s[i]=='(' && s[i+1]==')')
                {
                    a+='o';
                    i+=2;
                }
                
                else if(s[i]=='(' && s[i+1]=='a' && s[i+2]=='l' && s[i+3]==')')
                {
                    a+="al";
                    i+=4;
                }
            }
        }
        return a;
    }
};