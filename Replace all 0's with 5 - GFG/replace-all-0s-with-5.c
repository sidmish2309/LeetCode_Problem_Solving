// { Driver Code Starts
//Initial Template for C

#include <stdio.h>

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    scanf("%d",&T);
    while (T--) {
        int n;
        scanf("%d",&n);
        printf("%d\n",convertFive(n));
    }
}
// } Driver Code Ends


//User function Template for C

int convertFive(int num) {
    int p=0;
    int ans=0;
    while(num!=0)
    {
        int d=num%10;
        if(d==0) ans+=5*pow(10,p);
        else
        ans+=d*pow(10,p);
        p++;
        num/=10;
    }
    return ans;
}