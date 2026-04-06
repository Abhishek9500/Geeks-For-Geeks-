class Solution {
  public:
    
    int factorial(int n){
        
        int fact=1;
        
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        return fact;
    }
    
    int isStrong(int N) {
        // code here
        int original=N;
        int ans=0;
        while(N>0){
            
            int digit=N%10;
            
            int fact=factorial(digit);
            
            ans+=fact;
            
            N/=10;
        }
        
        if(ans==original) return 1;
        else return 0;
    }
};