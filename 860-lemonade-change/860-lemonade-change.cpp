class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0, ten=0, flag=1;
        int n=bills.size();
        for(int i=0; i<n; i++)
        {
            if(bills[i]==5)
            {
                five++;
            }
            
            else if(bills[i]==10)
                {
                ten++;
                if(five>0)
                five--;
                else
                {
                    flag=0;
                    break;
                }
                }
            
            
            else if(bills[i]==20)
            {
                if(five>=3 || (five>=1 && ten>=1))
                {
                if(five>=1 && ten>=1)
                {five-=1; ten-=1;}
                    
                   else if(five>=3)
                        five-=3;
                   
                }
                
                else
                {
                    flag=0;
                    break;
                }
            }
           
        }
        
        if(flag==0)
            return false;
        else
            return true;
        
    }
};