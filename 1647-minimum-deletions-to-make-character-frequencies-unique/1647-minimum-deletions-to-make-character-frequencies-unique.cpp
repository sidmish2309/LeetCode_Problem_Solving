class Solution {
public:
    int minDeletions(string s) {
        // since we only have to deal with frequencies
        // We will find the frequencies using hashmap of 26 sized array
        // Now, greedily look with the previous value how much frequency we             can decrease for the current index.
        
        //e.g--> s=aaabbbcccdd   ---> a=3, b=3,c=3,d=2
    //Now we have to change freq of b--> 3(already)-->2(done)
    //Now we have to change freq of c--->3(already)-->2(already)-->1(done)
    //Now we have to change freq of d---->2(alread)-->1(already)-->0(done)
        
        //so, ans--->5
        
        //e.g--> 6 4 4 2
        //#--maxi=6-1=5  now, since 4<6(No)
        //#--maxi=min(5-1,4-1)=3, now, since 4>3---> make it 3 (oper=1)
        //#--maxi=min(3-1,4-1)=2, now, since 2=2(No)
        
        
        int a[26]={0};
        for(int i=0; i<s.length(); i++)
        {
            a[s[i]-'a']++;
        }
        
        sort(a,a+26);
        reverse(a,a+26);
        int maxf=a[0]-1;
        int ans=0;
        for(int i=1; i<=25; i++)
        {
            if(a[i]!=0)
            {
                if(a[i]>maxf)
                {
                    if(maxf>0)
                    {
                        ans+=(a[i]-maxf);
                    }
                    else
                    {
                        ans+=a[i];
                    }
                }
            }
            maxf=min(maxf-1,a[i]-1);
        }
        return ans;
         
    }
};