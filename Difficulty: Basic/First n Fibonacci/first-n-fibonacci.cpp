// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        if(n==1) return {0};
        vector<int>ans;
        
        int a=0,b=1;
        
        ans.push_back(a);
        ans.push_back(b);
        
        for(int i=2;i<n;i++){
            int result=a+b;
            ans.push_back(result);
            
            a=b;
            b=result;
        }
        return ans;
    }
};