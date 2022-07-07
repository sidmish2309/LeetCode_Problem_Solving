// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
    bool isPrime(int n)
    {
        // Corner cases
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;
     
        // This is checked so that we can skip
        // middle five numbers in below loop
        if (n % 2 == 0 || n % 3 == 0)
            return false;
     
        // Using concept of prime number
        // can be represented in form of
        // (6*n + 1) or(6*n - 1) hence
        // we have to go for every multiple of 6 and
        // prime number would always be 1 less or 1 more then
        // the multiple of 6.
        for (int i = 5; i * i <= n; i = i + 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
     
        return true;
    }
    int primeFactors(int n)
    {
        // to store the count of prime factors
        int ans = 0 ;
        // Print the number of 2s that divide n
        while (n % 2 == 0)
        {
            ans++;
            n = n/2;
        }

        // n must be odd at this point. So we can skip
        // one element (Note i = i +2)
        for (int i = 3; i <= sqrt(n); i = i + 2)
        {
            // While i divides n, print i and divide n
            while (n % i == 0)
            {
                ans++;
                n = n/i;
            }
        }

        // This condition is to handle the case when n
        // is a prime number greater than 2
        if (n > 2)
            ans++;
        return ans;
    }

    bool brainGame(vector<int>nums) {
    	vector<int>a(1005,0);
    	for(int i = 2; i<= 1000; i++){
          if(!isPrime(i))
          {
              a[i] = primeFactors(i) - 1;
          }
    	}
    	int x = 0;
    	for(int i = 0; i < nums.size(); i++){
    		x = x ^ a[nums[i]];
    	}
    	if(x == 0)
    		return false;
    	return true;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		bool ans = ob.brainGame(nums);
		if(ans)
			cout << "A\n";
		else cout << "B\n";
	}  
	return 0;
}  // } Driver Code Ends