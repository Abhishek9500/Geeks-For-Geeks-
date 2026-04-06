// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int original=n;
        
        int ans=0;
        
        while(n>0){
            
            int remi=n%10;
            
            ans+=(remi*remi*remi);
            
            n/=10;
        }
        
        if(ans==original) return true;
        
        else return false;
    }
};